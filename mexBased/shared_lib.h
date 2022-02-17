#ifndef SHARED_LIB_H
#define SHARED_LIB_H

#include <stdio.h>
#include<string>
#include<iostream>
#include<cstdlib>
#include<array>
#include<cstdio>


using namespace std;

#ifdef __cplusplus 
    extern "C" { 
#endif

#ifdef BUILD_MY_DLL
    #define SHARED_LIB __declspec(dllexport)
#else
    #define SHARED_LIB __declspec(dllimport)
#endif 


void SHARED_LIB nth_prime(int n);

#ifdef __cplusplus 
    }
#endif


#endif