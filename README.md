# COUNTDOWN TIMER
Want to do a simple C project as a beginner for your college assignments? Check this out!

<img width="565" alt="image" src="https://github.com/SwethaatGH/countdowntimer/assets/98175379/78e8c955-3680-4204-8ee8-e7bc40c49c62">

The countdown timer displays time digitally. The digits are displayed in the seven segment display format for a number.

The user is requested to enter the time duration in seconds. The time is then displayed in the hours,minutes and seconds format. After every minute, the timer asks the user if it should continue counting or just stop (customisable). The time is displayed after a break of one second and thus it behaves like an actual timer.

## HOW IT WORKS
The process of printing and displaying each second is iterated through using a while loop construct.

The seven segment display of each digit is designed. 
Each digit’s design is split into three rows and four colums such that the top rows of each digit of the 
(hour hour:minute minute:second second) format is printed out followed by the middle rows and bottom rows.
The hours,minutes and seconds are separated by asterisks(*) instead of a colon.

## DETAILS
### <unistd.h>
<unistd.h> is standard header file used in c programming that provides access to POSIX operating system API.
The Portable Operating SystemInterface (POSIX) is a family of standards specified by the IEEE Computer Society for maintaining compatibility between operating systems.
It is Used For The Miscellaneous Symbolic Constant,Types and Declares miscellaneous function.
Its function is equivalent to windows.h of the Windows operating system, which is a unified API interface provided by the operating system for users for calling some services provided by the system.

### CHARACTER ARRAYS FOR STRINGS
Arrays of strings are created to store the design of each digit. The design is split into three rows such that each row can be accessed and printed separately whenever it is required.
Each row(top,middle and bottom) are thus strings.
Array tr is defined and consists of the strings of top rows of each digit from 0 to 9.
Array mr is defined and consists of the strings of middle rows of each digit from 0 to 9.
Array br is defined and consists of the strings of bottom rows of each digit from 0 to 9.

### INPUT CONSTRAINT
Duration entered should be less than (60x60x24)=86400.
The number of digits in each of the variables for hours,minutes and seconds(h,m,s respectively) are obtained beforehand so that suitable number of leading zeroes are appended to represent the correct time. The project program prints the output time in the 24 hour format.

## SAMPLE OUTPUT
<img width="565" alt="image" src="https://github.com/SwethaatGH/countdowntimer/assets/98175379/1aa1b534-46fa-494e-b7b0-87d53f7e97c1">
