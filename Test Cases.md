### Test cases - Core and Completion

## Possible test case format.
|**Scenario 1 Description**|Robot must successfully travel on the maze’s horizontal white lines.|
|---|---|
|**Preconditions**|N/A|
|**Assumption**|User has the text editor Geany installed on their computer and the necessary compilers installed and working.|
|**Test Description**|write purpose of test|
|**Testing Steps**|1. Open Geany.<br> 2. Open sever3.cpp file.<br> 3. Open a new Geany instance.<br> 4. Open robot.cpp file.<br> 5. Change variables.<br> 6. Execute server3.cpp.<br> 7. Execute robot.cpp.<br> 8. Observe robot movement.<br> 9. If the robot successfully completes the expected result, record in table with ✔️. If robot robot does not completed expected result record in table with ❌.<br> 10. Repeat steps 5 to 9 until variables are all tested.|
|**Expected Result**|The robot should move following the horizontal white line. The robot should not be constantly correcting itself especially when just travelling on a straight line.|
|**Actual Result**|The robot only travels in a straight line. So it follows the first horizontal white line, but once it passes the line it keeps travelling in straight ahead until it runs into an obstacle and does not turn.|

### Deepika 

|Test Case Id|Test Case Scenario| Test Case Description | Expected Outcome | Actual Outcome | Tese Case Status | 
|------------|------------------| --------------------- | -----------------| -------------- | ---------------- | 
| **Core-01** |Robot with clear route| Robot doesn't come across any obstacle | Robot should move from source to destination without any break| - | Not executed |  
| **Core-02** |Robot gets obstacle on its route| Robots gets any statioanary object in its scanning area | Robot should stop if hits any obstacle | - | Not executed |
| **Core-03** |Robots behaviour on turns _(without any obstacle)_| Robot gets turns (left or right) on its route | 1. Robot should be able to manage its speed to make sure it is not losing its track. <br/> 2. when robot passes though left or right turns then it should not derail itself from the white line.|-| Not executed | 
| **Core-04** |Duck crossing the path | Duck intersects the  Robot's route when it is moving towards its destination  | Robot should stop and wait for duck to cross the route and clear its way| - | Not executed | 
| **Core-05** |Robot approaches to finishing flag | Robot must stop when it is reaches to its final destination, it should not keep hitting the flag| Robot stops when it reaches to its final destination| - | Not executed |

### Janelle

CORE Test Cases</br>
How well does the robot follow the white line? Is it constantly correcting itself?
|Scenario|Expected Outcome|Actual Outcome|
|:---------------|:---------------|:-------------|
|Robot travelling on horizontal white lines|Robot must successfully travel on the maze’s horizontal white lines.|The robot only travels in a straight line. So it follows the first horizontal white line, but once it passes the line it keeps travelling in straight ahead until it runs into an obstacle and does not turn.|
|Robot travelling around sharp corners.|When making turns the robot should stay on the white line, so it is easier to find the next white line.|Although the robot turns when it approaches corners, it does not turn exactly on the white lines.|
|Robot after passing a sharp corner.|Robot must find the next white line and follow it.|Once the robot passes the corner, it would correct itself and move back onto the white line.|
|Robot travelling around curved corners|The robot should smoothly make it way around corners, staying on the white line.|    |
|Robot travelling on diagonal white lines|Robot must successfully travel on the maze’s diagonal white lines.|  |
|Robot travelling on vertical lines|Robot must successfully travel on the maze’s vertical white lines.|  |

### Michael

What to do when the Robot only has a partial view of the white line:

This test case will provide a situation and possible solution. The situation is what should the robot do when the whit line is in its view but not through the centre row.

If the white line is located in the bottom half of the viewpoint then the robot should turn towards it, i.e, if it is in the bottom left, turn left, if it is in the bottom right, turn right. This will result in the white line approaching the middle of the viewpoint vertically. As the robot turns it can check if the white line is in the centre pixels of the centre row and when it is the robot will be on track.

If the white line is located in the top half of the viewpoint the robot should turn towards it, i.e, if it is top left, turn left, top right, turn right. This will result in the robot being perpendicular to the white line. The robot should continue to turn until the white line is in the same row of pixels in the left hand side check column as the right hand side check column, when this is true the robot will be exactly perpendicular to the white line, it can then approach the white line until it fills the entire middle row of the view point, move forward x amount and perform a right angled turn, this will put the robot back onto the line perfectly, hopefully.

Issues that arise with this test case are:
that when the white line is in the bottom of the screen and the robot turns towards it, the white line may reach perpendicular to the centre check row but is not in the centre, the robot will need to correct itself at this point.
When the line is in the top half of the screen and the robot turns until it fills the centre check row, we will have to manually test how far the robot should move forward before turning 90 degrees otherwise the white line will not be in the centre of the screen.





