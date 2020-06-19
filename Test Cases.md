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
| **Core-01** |Robot with clear route| Robot doesn't come across any obstacle | Robot should move from source to destination without any break| Robot has moved from source to destination as expected | Pass |
| **Core-02** |Robot with clear route and follows white line| Robot doesn't come across any obstacle | Robot should move from source to destination without any break and it must follow the white line| Robot moves away from the white line around corners while making turns| Failed |
| **Core-03** |Robot approaches to finishing flag | Robot must stop when it is reaches to its final destination, it should not keep hitting the flag| Robot stops when it reaches to its final destination| Robot reaches to the finishing flag and then it turns back and started going back to the source | Fail |
| **Comp-01** |Robot gets obstacle on its route| Robots gets any statioanary object in its scanning area | Robot should stop if hits any obstacle | Robot stops when it approaches to the stationary object | Pass |
| **Comp-02** |Robots behaviour on turns _(without any obstacle)_| Robot gets turns (left or right) on its route | 1. Robot should be able to manage its speed to make sure it is not losing its track. <br/> 2. when robot passes though left or right turns then it should not derail itself from the white line.|Robot derails itself on the corners | Fail | 
| **Comp-03** |Duck crossing the path | Duck intersects the  Robot's route when it is moving towards its destination  | Robot should stop and wait for duck to cross the route and clear its way| Robot stops and waits for duck to cross the path | Pass | 
| **Comp-04** |Robot approaches to finishing flag | Robot must stop when it is reaches to its final destination, it should not keep hitting the flag| Robot stops when it reaches to its final destination| Robot reaches to the finishing flag and it stops at the end.| Pass |

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

How well does the Robot find the white line

|Test Case ID|Test Case Scenario|Test Case Description|Expected Outcome|Actual Outcome|Test Case Status|
|------------|------------------|---------------------|----------------|--------------|----------------|
|01|Finds White Line|How well does the Robot find the white line at speed 5|Robot moves slowly in a smooth curve towards the white|The robot turns acutely from left to right and back until it has moved forward enough for the white line goes through the bottom row|❌|
|02|Finds White Line|How well does the Robot find the white line at speed 10|Robot moves slowly in a smooth curve towards the white|The robot turns acutely from left to right and back until it has moved forward enough for the white line goes through the bottom row|❌|
Finds White Line|How well does the Robot find the white line at speed 20|Robot moves slowly in a smooth curve towards the white|The robot still turn left and right and back but at this speed it quickly finds the white line||✔️|
Finds White Line|How well does the Robot find the white line at speed 30|Robot moves slowly in a smooth curve towards the white|Does what is expected at a sufficient rate and follows the line without any problems||✔️|
Finds White Line|How well does the Robot find the white line at speed 40|Robot moves slowly in a smooth curve towards the white|Does what is expected but the speed makes the robot loose sight of the white line later in the maze||✔️|
Finds White Line|How well does the Robot find the white line at speed 50|Robot moves slowly in a smooth curve towards the white|Does what is expected but the speed makes the robot slightly over shoot the white line causing it to need to over correct itself||✔️|
Finds White Line|How well does the Robot find the white line at speed 60|Robot moves slowly in a smooth curve towards the white|Does what is expected but the speed makes the robot slightly over shoot the white line causing it to need to over correct itself||✔️|
Finds White Line|How well does the Robot find the white line at speed 70|Robot moves slowly in a smooth curve towards the white|The robot far overshoots the line multiple times and never finds its way onto the track and never finishes||❌|

Conclusion: The code performs as expected when the robot is moving at speed between 20 and 60, 30 is the optimal speed from testing as the robot experiences the least amount of trouble following the line after finding it.
