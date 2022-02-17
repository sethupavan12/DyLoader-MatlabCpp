g++ -c -DBUILD_MY_DLL wrapper.cpp
g++ -shared -o shared_lib.dll wrapper.o -Wl,--out-implib,libshared_lib.a