# Touhou - Bad Apple!! on Create Display Boards

Explanation:

All 30 lines on the display board matrix are fed data by a Display Link, which reads the name of one of 30 items on an adjacent Depot. 

These 30 items are continually renamed by the Data Pack, which consists (mostly) of around 2200 .mcfunction files that call each other in sequence from start to finish to cycle through all of the frames.

I wrote a C++ program to create these function files from a .txt of each frame of Bad Apple (from https://github.com/Chion82/ASCII_bad_apple). 

Video Demo: 
https://youtu.be/_mY5Ibyj-W4
