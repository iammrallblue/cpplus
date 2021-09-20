/*
    Declaration of Variables in C++:
        1. C++ is a strongly-typed language, variables MUST to be declared
            with its type before its first use.

        2. this informs the compiler the size of reserve in memory for the
            variable and how to interpret its value.
        
        3. Syntax:
                int a;
                float num;
                string str;

        4. variables can be declarated together (NOT RECOMMENDED)
            int a, b, c;
                this declares three variables (a,b, and ), same type of int.
         
	Initialization of Variables in C++:

        Three ways to initialize variables:
            C-like initialization:
                type identifier(variable name) = initial_value;
                    int a = 1;
            Constructor Initialization:
                type identifier(variable name) (initial_value);
                    int x (0);
            Uniform Initialization:
                type identifier(variable name) {initial_value};
                    int x {0};

    Type Inference and Deduction in C++: 推斷與推導
		keyword:
			auto
				int foo = 0;
				auto bar = foo;
                // the same as : int bar = foo;

            decltype() function:
                int foo = 0;
                decltype(foo) bar;
                // the same as : int bar;

			auto and decltype() are powerful features recently added 
            to the language

			Strings
				string str // lower letter
    Standard Strings in C++: 
        1. a string is a class. (string class)
        2. the program needs to include the header where type is defined
            with the standard library (header<string>)
                #include <string>


		Constants:
			const

		Integer Literal Types:

			unsigned (u or U)
			 75u
			
			long (l or L)

			long long (ll or LL)
			signed

		#define identifier replacement
			#define PI 3.1414 (constant)

*/
#include <iostream>
#include <cstdlib>
// #include <iterator>
#include <string>
// #include <vector>

using namespace std;

int main()
{
    string str;
    str = "this is a string.";
    cout << str << endl;
    return EXIT_SUCCESS;
} // main