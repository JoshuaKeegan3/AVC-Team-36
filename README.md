# Project-3-Team-36
## AVC Plan
ENGR101 Project 3 - "The purpose of this project is to write a software which guides a robot through a maze."  

### Communication  
We have decided as a group to meet on Friday between 1-3 pm to work on the code for our project. We have made a group chat on Facebook messenger which will be our main form of communication when we have made progress, and want to report back to the group about. If we believe we need to meet as a group twice a week via zoom, Tuesday between 1-3 pm is the next alternative option. 

### Team members and contact info

- #### Jasmine Dong - jasmineelladong@gmail.com  
Project Manager - organising team meetings, reporting regularly on progress

- #### Josh Keegan - josh.keegan3@gmail.com  
Software Architect - writing core code and extending functionality

- #### Michael Dewson - mikedwn123@gmail.com  
Software Architect - writing core code and extending functionality

- #### Deepika Raheja - raheja.deepika87@gmail.com  
Software writing, testing, and documentation - debugging software and committing to
git, writing test cases and documenting performance against milestones

- #### Janelle Lim-Ranola - janelle.limranola@gmail.com  
Software writing, testing, and documentation - debugging software and committing to
git, writing test cases and documenting performance against milestones

### Deadlines to note

| Hand-ins | Date | Course mark |
|----------|------|-------------|
| Plan | Thurs 4th May | |
| Code due | Fri 19th May | 5%|
| Team Log | Wed 24th May | 5% |
| Individual Log | Wed 24th May  | 5% |
| Group Log Report | Wed 24th May  | 5% |

### Interferances to note
| Conflicts | Due Date | 
|----------|------|
| ENGR101 Tutorial 4 | Mon 1st May |
| ENGR 121 Assignment 6 | Wed 3rd May |
| COMP Assignment 7/6+7 | Thurs 4th May |
| ENGR 121 Lab 3 | Fri 5th May  |
| CYBR 171 Assignment 2 | Mon 8th May  |
| ENGR 121 Assignment 7| Wed 10th May  |
| Comp Assignment 8 | Thrus 11th May  |
| CYBR ENGR Test 2 | Wed 17th May  |
| Comp Assignment 9/8+9 | Mon 18th May  |

Note the large gap between the 11th and the 17th. This is where we should be getting a lot of work done and can be treated as both a catch up and a get ahead period for the project. Challenge code may be written in this time. If this happens challenge test case creation will have to be accerated and more minds put towards it.

After report submission is Assignment 10 for Comp and Cybr Test 2. Because of this we may want to complete the parts sooner than scheduled. 

### Timeline
Note this is a team timeline and the Invidvidual Report will have to be completed in your own time. This time is provided while finalising the Group report and logs between the Friday 19th and Wednesday 24th of May however should be worked on throughout by the individual. 

| Date | Agenda | What we want to accomplish |
|----------|------|-------------|
| ENGR101 lectures | | Jasmine is in charge of asking any questions on behalf of the group |
| Tues 26th April | GitHub | Josh set up project repository |
| Sun 31st April | Group met via zoom | Get to know each other |
| Tues 2nd May | Plan discussion | Install SFML on our devices so we are ready to start |
| Wed 3rd May | ENGR101 Lecture | Jasmine asks any questions with Arthur |
| Fri 5th May | Do core code | Writing core code and write Core test cases |
| Sun 7th May | Check on core code | Gives time to test and debug code for next meeting. Finished Core test cases ready for code completion|
| Tues 9th May | Completion discussion | Finalise core code and start completion code and write Completion test cases |
| Fri 12th May | Check on completion code | Gives time to test and debug code for next meeting. Finished Completion test cases ready for challenge code |
| Sun 14th May | Challenge discussion | Finalise completion code and start challenge code and writing Challenge test cases |
| Tues 16th May | Update on challenge | Should be near the end of the coding progress. Finished Challenge test cases|
| Thur 18th May | Double check code | Make sure code works and is ready for hand-in the following day |
| Fri 19th May | CODE DUE | Make sure code is submitted |
| Fri 19th May | Report discussion | Discuss report with group and recap logs (team and individual) |
| Tues 23rd May | Finalise report | Check that report is done and logs are finished |
| Wed 24th May | REPORT DUE | Make sure all report and logs are submitted - PROJECT DONE! |

## Project Log - Wiki

## Test cases - Core
|Test Case Id|Test Case Scenario| Test Case Description | Expected Outcome | Actual Outcome | Tese Case Status | 
|------------|------------------| --------------------- | -----------------| -------------- | ---------------- | 
| **Core-01** |Robot with clear route| Robot doesn't come across any obstacle | Robot should move from source to destination without any break| - | Not executed |  
| **Core-02** |Robot gets obstacle on its route| Robots gets any statioanary object in its scanning area | Robot should stop if hits any obstacle | - | Not executed |
| **Core-03** |Robots behaviour on turns _(without any obstacle)_| Robot gets turns (left or right) on its route | 1. Robot should be able to manage its speed to make sure it is not losing its track. <br/> 2. when robot passes though left or right turns then it should not derail itself from the white line.|-| Not executed | 
| **Core-04** |Duck crossing the path | Duck intersects the  Robot's route when it is moving towards its destination  | Robot should stop and wait for duck to cross the route and clear its way| - | Not executed | 
| **Core-05** |Robot approaches to finishing flag | Robot must stop when it is reaches to its final destination, it should not keep hitting the flag| Robot stops when it reaches to its final destination| - | Not executed |

