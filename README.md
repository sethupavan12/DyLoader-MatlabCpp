# DyLoader C++ and Matlab

## DyLoader help dynamically load methods from a dynamic library using DyLib and some custom scripts

### Case 1: Load a function from a dynamic library compiled with C++ 

### Example
### Prechecks and Basic Idea
1. if you are windows user, MinGW so you can enjoy gcc/g++ on Windows
2. Open folder mexBased in main branch of the repository (disregard the name)
3. Open and checkout ` Wrapper.cpp `. It is the file that has been / will be compiled into a DLL 
   Notice how every function has DYLIB_API. It is a must for Dylib to be able to extract the functions from the DLL
3. Now open `main.cpp` . It is the script we use to extract a function from DLL
4. Make sure you have the following files to proceed; `main.cpp, dylib.hpp, shared_lib.h, build.bat, wrapper.cpp`

### Making a DLL and Using it
1. The `shared_lib.h` and `build.bat` has been prewritten to work on Windows(not tested on Linux or MacOs)
2. Go to your command prompt and navigate to mexBased folder/ the folder you have these files
3. type `build.bat` If all goes good u should see 2 commands pop up and return nothing
4. type `g++ main.cpp -o main.exe`  (if u leave the -o part, it will default to a.exe )
5. type `main` and hit enter. You should see `Success Hello Success`

# This is trial attempt of how we tell user to do stuff before compilation of DLL
## We can further improve on this with writing more automated scripts as well

### Tool that extracts functions or variables from dynamic library at Run-time to compute MEX C++ functions dynamically using MATLAB Coder


# Usage for custom scripts

Make sure all you've got MinGW if you are windows
1. Make sure you include "dylib.hpp" in your custom script where you have your functions that are going to be used
2. Make sure there's DYLIB_API infront of function names. (The functions you want to use)
3. Edit build.bat according to the name of your file (or we can restrict the user here)
4. Remember the function name you'd like to use and enter when prompted for it at some point in RAT
