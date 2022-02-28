// given a name of a function, the class will have a method to get the function from the dynamic library using dylib.get_function<>

// Explanation: 
// This class is used to load a dynamic library and get its functions, or variables by name
// The class is inherited from dylib class, which is used to load the dynamic library and get its functions and variables
// The class is used to get a function by name, and then call it with the given parameters
// The class is used to get a variable by name, and then get its value



#include "dylib.hpp" // dylib class and make sure it is included in same directory
#include <iostream>
#include <string>
#include <vector>
#include <tuple>

class wrapper
{
    public:
    dylib library;
    // a variable to hold the function pointer to the function in the dynamic library
    void *function; // void pointer to function 


    

    // constructor which takes the name of the library
    wrapper(std::string libName)
    {
        try 
        {
            // load the library and make it accessible to other functions in this class
            this->library = dylib(libName, dylib::extension);

            // dylib lib(libName, dylib::extension);
        }
        catch (const dylib::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
    }

    // a function that gets a function when given the name of the function and returns a function pointer to the function in the library

    template <typename T> 
    T get_function(std::string funcName)
    {
        try
        {
            // get the function from the library
            auto func = this->library.get_function<T>(funcName);
            // return the function to template T so that it can be used in the class
            this->function = (void *)func;
        }
        catch (const dylib::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
    }

    // a function that gets a variable when given the name of the variable and returns a variable template T so that it can be used in the class 
    template <typename T>
    T get_variable(std::string varName)
    {
        try
        {
            // get the variable from the library
            auto var = this->library.get_variable<T>(varName);
            return var;
        }
        catch (const dylib::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
    }

    // a function that uses the function obtained from get_function to call the function in the library. 
    // Input :  arguments to the function which are params,bulkin,bulkout,contrast
    // output : Output is a vector which cointains a vector of doubles and an integer which are the return values of the function
    // Output would look like this : [ [[2,5,3],[2,3,4],[4,6,5]], 1 ] 
    std::tuple<std::vector<double>,double>callScriptFunction(double *params, double *bulk_in , double *bulk_out, int contrast)
    {
        function = this->function;
        double sub_rough;
        std::vector<double> output;

        // call the function in the library

        output = ((std::vector<double> (*)(double *, double *, double *, int))function)(params, bulk_in, bulk_out, contrast);
        sub_rough = params[3];
        return std::make_tuple(output,sub_rough);

    

    }


};
