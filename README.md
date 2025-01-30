# D-DTracker
This project's main goal is to provide a simple way to keep track of turn order during a game of dungeons and dragons 5th edition. This provides a simple console based interface to attach initiative rolls to a character's name. It also will automatically sort the list given to it and give the turn ordered based on who had the highest number. This is project I did to familiarize myself with c++ after a long time and don't plan on coming back to it. 
## setup 
building of this project requires a c++ compiler, cmake and the Ninja make system. I would also advise creating a build dir to build the project into.
with c++,cmake and Ninja the build process should go as follows:
create a dir to build into
"mkdir build" 
go into dir
"cd build"
use cmake on the parent dir
"cmake .."
build with Ninja
"ninja"
run program ( make sure to give the program permissions to run on your computer)
./DDTracker.exe.
