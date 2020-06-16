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


### Installation
Installing SFML on OSX

The first step is to install home brew. To Install home-brew there are a few methods. The first is via terminal. There are two ways you can find the terminal.
1) Command(⌘) + spacebar(⎵) can be used to open spotlight search. This will be a search bar appearing in the centre of you screen. Type "terminal" in it. Click the first thing

Image

2) The terminal can also be found in /Applications/Utilities/ folder. 

3) Terminal is possible to be found by opening the launchpad found on the Mac quick bar at the bottom of your desktop.

Image

After opening terminal paste the following command into a single terminal line and press enter(return)
```
/usr/bin/ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)" 
```
You’ll see a series of lines about what the script will install and where, hit Return again to agree or hit Escape to cancel.

After agreeing, enter the administrator password (required by sudo execution) to begin installation

After installing homebrew you are ready to install sfml
Type the following command into a single line of the terminal and press enter
```
brew install sfml
```

After installing sfml, you can install this project from GitHub. Go to the top of the home page of the repository and click the green button on the right that says "Clone or download". Then click download zip.

Image

On Mac simply double clicking the zip file will extract it. You can then save the extracted folder wherever you want.

On Mac open the file and open the AVC_Mac folder and then the AVC_robot file. Then open robot.cpp in Geany. Don't close this folder because you will need it later.

Go to build -> set build commands
Under the header "cpp commands" click the box beside "build" 

Image

Paste the following flags (text) at the end of the flags (text) that is already there.

```
-lsfml-graphics -lsfml-window -lsfml-system -lsfml-network
```

 The new command should look something like:
```
g++ -Wall -o "%e" "%f" -lsfml-graphics -lsfml-window -lsfml-system -lsfml-network 
```

Open go back into the folder where you were before and open server3.cpp in Geany 

On Mac press **fn+f8**, **fn+f9**, **fn+f5**
A terminal should open don't close it

Reopen the robot.cpp file.
On Mac press **fn+f8**, **fn+f9**, **fn+f5**

Watch the robot do it's thing

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
| ENGR101 Tutorial 4 | Mon 1st June |
| ENGR 121 Assignment 6 | Wed 3rd June |
| COMP Assignment 7/6+7 | Thurs 4th June |
| ENGR 121 Lab 3 | Fri 5th June  |
| CYBR 171 Assignment 2 | Mon 8th June  |
| ENGR 121 Assignment 7| Wed 10th June  |
| COMP Assignment 8 | Thrus 11th June  |
| CYBR ENGR Test 2 | Wed 17th June  |
| COMP Assignment 9/8+9 | Thurs 18th June  |

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

| Log | Date | |
|----------|------|------| 
| Log 1 | Sunday 31st May | |
| Log 2 | Tuesday 2nd June | |
| Log 3 | Friday 5th June | |
| Log 4 | Tuesday 9th June | |
| Log 5 | Thursday 11 June | |
| Log 6 | Monday 15 June | General Update |

## Test cases - Core

- If robot has an obstacle in sight, finds a way to avoid it and change direction
- How the robot changes direction, successfully able to keep speed when turning
- Robot finds a way to intersect obstacles
- Robot stops when it detects flag
- How good is the robot able to detect the white line and follow it
- How well does the robot follow the white line? Is it constantly correcting itself?

## Test cases - Completion

- Robot needs to detect white line rather than just white pixel as the images have a white background
- Robot needs to determine which way to go when there are two directions that the robot could go too
- If the robot goes the wrong direction and hits a deadend, how does it know to turn around?
- Second half of the maze, they are missing a white pixel where the lines don't quite meet at the corners. Making sure that the robot does not go off track.
- Right angled corners instead of curvy lines
