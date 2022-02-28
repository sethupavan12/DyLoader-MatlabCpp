// main.cpp

#include <iostream>
#include "dylib.hpp"

int main()
{
    try {
        dylib lib("./compileDLL", dylib::extension);

        auto adder = lib.get_function<double()>("compileThis");
        std::cout << adder() << std::endl;

    //     auto printer = lib.get_function<void()>("print_hello");
    //     printer();

    //     double pi_value = lib.get_variable<double>("pi_value");
    //     std::cout << pi_value << std::endl;

    //     auto &ptr = lib.get_variable<void *>("ptr");
    //     if (ptr == (void *)1)
    //         std::cout << "1" << std::endl;
    // 
        }
    catch (const dylib::exception &e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}

// a function to get the adder function from the dynamic library

// int getAdder(int a, int b)
// {
//     dylib lib("./dynamic_lib", dylib::extension);
//     auto adder = lib.get_function<int(int, int)>("adder");
//     return adder(a, b);
// }