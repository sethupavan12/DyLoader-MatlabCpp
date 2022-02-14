// main.cpp

// Implemantationof how to extract a function from dynamic library

#include <iostream>
#include "dylib.hpp"

int main()
{
    try {
        dylib lib("./compileDLL", dylib::extension);

        auto adder = lib.get_function<double()>("adder");
        std::cout << adder() << std::endl;
        }
    catch (const dylib::exception &e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}

