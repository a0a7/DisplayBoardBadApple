# Bad Apple!! Music Video on Create Mod Display Boards

Simple program to create a Minecraft datapack that plays the Bad Apple!! MV on Create mod train display boards. This repository also includes a world containing this datapack and the infrastructure this datapack needs to run the video on Display Boards at [world.zip](https://github.com/syslev/DisplayBoardBadApple/blob/main/world.zip).

## Video Demo: 

**Watch on YouTube:**
https://www.youtube.com/watch?v=_mY5Ibyj-W4

https://github.com/alexandsr/DisplayBoadBadApple/assets/61996958/ff794a85-0432-499e-bd55-e4b34f4781a8

## Explanation:
All 30 lines on the display board matrix are fed data by a Display Link, which this information by reading the name of one of 30 items on an adjacent Depot. Each line has its own display link, depot, and item.

These 30 items are continually renamed by the functions contained within the Datapack, which consists (mostly) of around 2200 .mcfunction files that run in sequence to cycle through all of the frames.
