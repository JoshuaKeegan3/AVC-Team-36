#include "robot.hpp"
#define _USE_MATH_DEFINES
#include "Speeds.hpp"
#include <cmath>
#include "is_red.hpp"

bool mazeMode(bool curr_maze_mode){//if there is no white line run this
	//if there is red on left side return true
	if(curr_maze_mode){
		return true;
	}
	else{
		bool red=false;
		for(int i=0;i<cameraView.width;i++){
			for(int j=0;j<cameraView.height;j++){
				if (is_red(
					get_pixel(cameraView,j,i,0),
					get_pixel(cameraView,j,i,1),
					get_pixel(cameraView,j,i,2)
				)){
					red= true;
				}if (get_pixel(cameraView,j,i,3)>250 && !is_red(
					get_pixel(cameraView,j,i,0),
					get_pixel(cameraView,j,i,1),
					get_pixel(cameraView,j,i,2)
				)){
					return false;
				}
			}
		}
		return red;
	}
}
//if maze mode
	//if no red pixel on left near rob 
		//turn left
	//if red infront robot 
		//turn right
	//if red right
		// spin fast
	

double calculateOffset(double speed){
	/// Returns a double between -1 and 1
	/// Representing the distance the centre
	/// Of the white line is away from the robot
	/// If the number is positive the line is to the left
	/// If the number is negitive the line is to the right
	for(int row=0; row<cameraView.height;row++)
	{//turn left
		if(get_pixel(cameraView,row,0,3)>250){
			std::cout<<"left"<<std::endl;
			return row!=0?atan(cameraView.width/2.0/row):1;
		}
	}
	for(int col=0; col<cameraView.width;col++){//adjust forward
		if(get_pixel(cameraView,0,col,3)>250){
			std::cout<<"top"<<std::endl;
			return atan((cameraView.width/2.0-col)/cameraView.height);
		}
	}
	for(int row=0; row<cameraView.height;row++){//turn right
		if(get_pixel(cameraView,row,cameraView.width-1,3)>250){
			std::cout<<"right"<<std::endl;
			return row!=0?-atan(cameraView.width/2.0/row):1;
		}
	}
	for(int col=0; col<cameraView.width;col++){//adjust back
		if(get_pixel(cameraView,cameraView.height - 1,col,3)>250){
			std::cout<<"bot"<<std::endl;
			return cameraView.width/2.0-col>0?1:0;
		}
	}
	

	return speed * (M_PI_2)/4;
}
Speeds calculateWheelSpeeds(double speed, bool &curr_maze_mode){
	Speeds speeds;
	curr_maze_mode=mazeMode(curr_maze_mode);
	if(curr_maze_mode)
	{
		bool top=false;
		bool left=false;
		bool right=false;
		int wall_width=32;
		/*
		for(int row=wall_width; row<cameraView.height-wall_width;row++)
		{
			if(get_pixel(cameraView,row,0,0)>250){//checks left
				left=true;
			}
		}
		for(int col=wall_width; col<cameraView.width-wall_width;col++){//checks top
			if(get_pixel(cameraView,0,col,0)>250){
				top=true;
			}
		}
		for(int row=wall_width; row<cameraView.height-wall_width;row++){//checks right
			if(get_pixel(cameraView,row,cameraView.width-1,0)>250){
				right = true;
			}
		}
		*/
		for(int col=0; col<cameraView.width;col++){//checks top
			if(get_pixel(cameraView,(9.8/10.0)*cameraView.height,col,0)>250){
				if(col<wall_width){
					left=true;
				}else if(col<cameraView.width-wall_width){
					right=true;
				}
				else if(col>wall_width){
					top=true;
				}
			}
		}
		std::cout<<"Top: "<<top<<" Left: "<<left<<" Right: "<<right<<std::endl;
	    if(top && left && right){
			speeds.vLeft=675.0/7;
			speeds.vRight=-675.0/7;
		}else if(right && left || left &&top){
			speeds.vLeft=32;
			speeds.vRight=21.5;
		}else if(left){
			speeds.vLeft=50;
			speeds.vRight=50;
		}else{
			speeds.vLeft=20;//20 25
			speeds.vRight=28;
		}
		return speeds;
	}else{
		double angle = calculateOffset(speed);
		
		std::cout<<" angle="<<angle<<std::endl;
		speeds.vLeft=speed-(angle)*675/speed/2/(M_PI_2);
		speeds.vRight=speed+(angle)*675/speed/2/(M_PI_2);
		speeds.vRight=speed+(angle)*675/speed/2/(M_PI_2);
	}


	return speeds;
}
int main(){
	if (initClientRobot() !=0){
		std::cout<<" Error initializing robot"<<std::endl;
	}
    double vLeft = 5.0;
    double vRight = 5.0;
    double speed = 2000.0; //30
    takePicture();
    SavePPMFile("i0.ppm",cameraView);
    bool curr_maze_mode=false;
    while(1){
	  takePicture();
	  Speeds speeds = calculateWheelSpeeds(speed,curr_maze_mode);
	  vLeft = speeds.vLeft;
	  vRight = speeds.vRight;
      setMotors(vLeft,vRight);   
      std::cout<<" vLeft="<<vLeft<<"  vRight="<<vRight<<std::endl;
       usleep(100000);
  } //while

} // main

