// main.cpp

#include <iostream>
#include "dylib.hpp"

int main()
{
    try {
        dylib lib("./package/newCompile/compile", dylib::extension);

        auto nth_prime = lib.get_function<int(int)>("compile");
        //nth_prime(5);
        int a = 5;
        int ans = nth_prime(a);
        printf("%d\n", ans);

        return 0;

     }
    catch (const dylib::exception &e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}