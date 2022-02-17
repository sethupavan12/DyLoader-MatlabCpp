// C++ file that uses the dylib class:
// Include Files
//#include "compile.h"
//#include "coder_array.h"
#include <iostream>
#include "dylib.hpp"
#include "shared_lib.h"


DYLIB_API int main(){
    int a = 1;
    int b = 2;
    int x = a + b;
    std::cout << x << std::endl;
}

DYLIB_API void print_hello()
{
    std::cout << "Hello" << std::endl;
}



// function to find the nth prime number using sieve of eratosthenes
DYLIB_API void nth_prime(int n)
{
    // create a boolean array of size n+1 and initialize all values as true.
    // 0 and 1 are not prime numbers so we make them false.
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    // loop through the array and mark all composite numbers as false
    for (int p=2; p*p<=n; p++) {
        // if p is not changed, then it is a prime
        if (prime[p] == true) {
            // update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
    // count the primes
    int cnt = 0;
    for (int p=2; p<=n; p++) {
        if (prime[p])
            cnt++;
        if (cnt == n)
        // aarray
            std::cout << p << std::endl;

    }
}


