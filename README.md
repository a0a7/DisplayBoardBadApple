# Bad Apple Music Video played on Minecraft Create Mod Display Boards

This is a repository containing two things--the first is a C++ program that converts a text file containing ASCII art of every frame from the Bad Apple shadow art music video into a Minecraft Datapack. The second is a Minecraft world containing this datapack and the blocky infrastructure this datapack needs to run the Shadow Art music video on Create mod Display Boards.

Video Demo: 
https://youtu.be/_mY5Ibyj-W4

Explanation:
All 30 lines on the display board matrix are fed data by a Display Link, which gets its data by reading the name of one of 30 items on an adjacent Depot. Each line has its own display link, depot, and item.

These 30 items are continually renamed by the functions contained within the Datapack, which consists (mostly) of around 2200 .mcfunction files that run in sequence to cycle through all of the frames.

These .mcfunction files were created by the C++ program, with this (https://github.com/Chion82/ASCII_bad_apple) ASCII-art version of Bad Apple as input.
