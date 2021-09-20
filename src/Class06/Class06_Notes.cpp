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

    Standard Strings in C++: 
        1. a string is a class. (string class)
        2. the program needs to include the header where type is defined
            with the standard library (header<string>)
                #include <string>

    Constants and Literals in C++:
        Constants are expressions with a fixed value

        Literals is part of Constants: 
            Literal Constants:
                Integer, Floating-point, Characters, Strings, Booleans
                Pointers, and User-Defiend Literals

                Integer Literals:
                    Numberical Constants that identify integer values
                        1776, 707, -273
                    
                    C++ allows the use of octal numbers(base 8),
                    hexadecimal numbers (base 16), and binary numbers(base 2)
                    as literal constants.
                        For example, 
                            75      // decimal
                            0113    // octal
                            0x4b    // hex
                            0b1001011       // binary
                            All of these represent the same number: 75
                            as a base-10 numeral.
                Integer Literal Types:
                    Literal constants have a type, just like variables.

                    By default, integer literals are of type int.

                    Suffixes:
                        Suffix      Type modifier
                        u or U      unsigned
                        l or L      long
                        ll or LL    long long

                    Unsigned may be combined with any of the other two in 
                    any order to form unsigned long or unsigned long long.
                        75 // int
                        75u // unsigned int 
                        75l // long
                        75ul // unsigned long 
                        75lu // unsigned long
                
                Floating point Literal:
                    1. Express real numbers, with decimals or exponents
                    2. The default type of floating point is Double.
                    Suffixes:
                    Suffix      Type modifier
                    f or F      float
                    d or D      long double

                        a decimal point, an e character or 
                        both a decimal point and an e character:
                            Ex.
                                3.14159L  // 3.14159 
                                6.02e23f // 6.02 x 10^23 
                                1.6e-19 // 1.6 x 10^-19 
                                3.0 // 3.0
                Character and String Literal:
                    char ch = 'a';
                    char ch1 = 'A;
                    string str = "a string."// lower letter
                    string str2 = "Hello,World!";
                
                Special Characters:
                    Escape Code     Description
                        \n          newline
                        \r          carriage return
                        \t          tab
                        \v          vertical tab
                        \b          backspace
                        \f          form feed (page feed)
                        \a          alert (beep)
                        \'          single quote (')
                        \"          double quote (")
                        \?          question mark (?)
                        \\          backslash(\)

                Other Literals:
                    Three keywords in C++:
                        true, false, 
                            these are boolean value in C++;
                             Ex. bool boo = true;
                        nullptr.
                            the null pointer value.
                            int* p = nullptr;
                   
                Types Constant Expressons:
                    Keyword:
                        const
                            A keyword "const" makes variable become constant variable
                        const doublt PI = 3.1415926;
                        const char ch = 'A';

                        preprocessor definition for constant:
                            1. after #define any identifiers is interpreted as a replacement.
                                which will be any sequence of characters until the end of line.
                            2. The replacement will perform before code compiling
                            #define identifier replacement
                            #define PI 3.1414 (constant)
                            
*/
#include <iostream>
#include <cstdlib>
// #include <iterator>
#include <string>
// #include <vector>
#define PI 3.14159
/*
    Notice that #define is the preprocessor directives.
    w/o a semicolon.
*/

using namespace std;

int main()
{
    string str;
    str = "this is a string.";
    cout << str << endl;

    // Preprocessor Definitions Example
    double radius = 5.0;
    double area = 2 * PI * radius;
    cout << "Area is: " << area << endl;
    return EXIT_SUCCESS;
} // main