# Touhou - Bad Apple Music Video played on Minecraft Create Mod Display Boards

This is a repository containing two things. The first is a C++ program that converts a text file containing ASCII art of every frame from the Bad Apple shadow art music video. The second is a Minecraft world containing this datapack and the blocky infrastructure it needs to run. 

Video Demo: 
https://youtu.be/_mY5Ibyj-W4

Explanation:
All 30 lines on the display board matrix are fed data by a Display Link, which reads the name of one of 30 items on an adjacent Depot. 

These 30 items are continually renamed by the functions contained within the Datapack, which consists (mostly) of around 2200 .mcfunction files that run in sequence to cycle through all of the frames.

These .mcfunction files were created from https://github.com/Chion82/ASCII_bad_apple by the C++ program I wrote.

