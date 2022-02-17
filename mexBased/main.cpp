// main.cpp

#include <iostream>
#include "dylib.hpp"

int main()
{
    try {
        dylib lib("./shared_lib", dylib::extension);

        auto nth_prime = lib.get_function<void(int)>("nth_prime");
        nth_prime(5);
        std::cout << "Success" << std::endl;

        auto print_hello = lib.get_function<void()>("print_hello");
        print_hello();
        std::cout << "Success" << std::endl;

       

        // auto printer = lib.get_function<void()>("print_hello");
        // printer();

        // double pi_value = lib.get_variable<double>("pi_value");
        // std::cout << pi_value << std::endl;

        // auto &ptr = lib.get_variable<void *>("ptr");
        // if (ptr == (void *)1)
        //     std::cout << "1" << std::endl;
     }
    catch (const dylib::exception &e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}