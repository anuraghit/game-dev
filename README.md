# Timber
The Timberman game clone, which is based on ideas and concepts from a "Beginning C++ Game Programming" book by John Horton.

Hotkeys
--------
- "Esc" for exit from the game
- "Enter" for start the game
- "Right arrow" / "Left arrow" for making a cut of a tree from an appropriate side

Requirements
------------
- Visual Studio(2022)
- C++17
- SFML 2.4.2 (x32 version)

How to build 
------------
After opening the project in Visual Studio, go to "Project -> Timber properties...":
1) Select "All configurations" in "Configuration" section and change from x64 to x86.
2) In "C/C++ -> General -> Additional include directories" section append the "include" directory of SFML library
3) In "Linker -> General -> Additional library directories" section append the "lib" directory of SFML library
4) Select "Debug" in "Configuration" section
5) Append the string (without quotes) "sfml-graphics-d.lib;sfml-window-d.lib;sfml-system-d.lib;sfml-network-d.lib;sfml-audio-d.lib;" at the beginning of the
"Linker -> Input -> Additional dependencies" section
6) Select "Release" in "Configuration" section
7) Append the string (without quotes) "sfml-graphics.lib;sfml-window.lib;sfml-system.lib;sfml-network.lib;sfml-audio.lib;" at the beginning of the
"Linker -> Input -> Additional dependencies" section

Screenshots
-----------

#Screenshots
![Screenshot_1](https://user-images.githubusercontent.com/57986981/165494964-07917bc3-f4ea-424b-a0d9-25e89f9d09b1.png)
