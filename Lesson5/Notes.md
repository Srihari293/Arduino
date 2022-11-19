# Lesson 5: Working with binary numbers
1. Computers look at things are true or false i.e On or off i.e 1 or 0.
2. Numbers, letters, words, colors and music can all be represented by numbers, binary numbers in particular.
3. Micro-controllers have billions of switches that can represent a series of 0's and 1's

## How do we count?
0,1,2,3,4,5,6,7,8,9. Oh wait we have used all characters, so we reuse the characters from this set to create the next number, 10. 
But counting more than 2 digits require way more characters to count. Therefore we use binary numbers to represent numbers.

### Binary to Decimal
| x<sub>1</sub> | x<sub>2</sub> | x<sub>3</sub> | x<sub>4</sub> | Decimal |
|--|--|--|--|--|
|0|0|0|0|0|
|0|0|0|1|1|
|0|0|1|0|2|
|0|0|1|1|3|
|0|1|0|0|4|
|0|1|0|1|5|
|0|1|1|0|6|
|0|1|1|1|7|
|1|0|0|0|8|
|1|0|0|1|9|
|1|0|1|0|10|
|1|0|1|1|11|
|1|1|0|0|12|
|1|1|0|1|13|
|1|1|1|0|14|
|1|1|1|1|15|

### Decimal to Binary
Summation of the 2<sup><em> position<em></sup> x <em>value of the position<em>

Ex1: 1100 -> Decimal?

Ans: (2<sup>3</sup> x 1) + (2<sup>2</sup> x 1) + (2<sup>1</sup> x 0) + (2<sup>0</sup> x 0)

   = 8 + 4 + 0 + 0

   = 12

To learn more about basics of binary number representation and other operations check out this [website](https://www.mathsisfun.com/binary-number-system.html)

## Homework
Make an LED counter to count from 0 to 15
![Set-up](images/img1.png)
