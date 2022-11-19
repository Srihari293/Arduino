# Lesson 5: Working with binary numbers
1. Computers look at things are true or false i.e On or off i.e 1 or 0.
2. Numbers, letters, words, colors and music can all be represented by numbers, binary numbers in particular.
3. Micro-controllers have billions of switches that can represent a series of 0's and 1's

## How do we count?
0,1,2,3,4,5,6,7,8,9. Oh wait we have used all characters, so we reuse the characters from this set to create the next number, 10. 
But counting more than 2 digits require way more characters to count. Therefore we use binary numbers to represent numbers.

| x<sup>1</sup> | x~2 | x~3 | x~4 |
|--|--|--|--|
|0|0|0|0|
|0|0|0|1|
|0|0|1|0|
|0|0|1|1|
|0|1|0|0|
|0|1|0|1|
|0|1|1|0|
|0|1|1|1|
|1|0|0|0|
|1|0|0|1|
|1|0|1|0|
|1|0|1|1|
|1|1|0|0|
|1|1|0|1|
|1|1|1|0|
|1|1|1|1|


## Excercise:
SOS in morse code is  . . . ---- . . . 
1. The dot duration has to be shorter and the dash duration has to be longer. 
2. Let us declare dot_time and dash_time as integer variables to set the time once
3. The output pin gets assigned to the variable blueLED.

## Basic single LED configuration
**Schematic**
![Schematic](images/img2.png)
![Set-up](images/img1.png)

## Homework
3 LEDs doing S.O.S Fast slow and very slow.
![Homework](images/img3.png)