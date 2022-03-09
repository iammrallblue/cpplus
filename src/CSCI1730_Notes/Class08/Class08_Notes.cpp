#include <iostream>
#include <string>

using namespace std;

/*
	Functions in c++:
		1. A group of statements that has a given name, can be called at point of code.
		2. No needed defining inside classes
		3. Syntax:
			type func_name(param1,param2,...)
			{
				// statements
			}
		4. Ex.
			int addFunc(int x, int y)
			{
				return x + y; // a function can have a return value.
			}
		5. the return value of main() function:
			return 0; // The program was successful.
			return EXIT_SUCCESS; // same as return a 0, defined in <cstdlib>
			return EXIT_FAILURE // The program failed. Defined in <cstdlib>
		
		6. Pass by value:
			See add() function

		7. Pass by reference:
			See void duplicate() Function
			int & a;
			a* = 2;
			
		8. Ranged For Loop & Pass by Reference
	
	Ranged for loop & pass by reference: 
		(see example)

	string can pass by value as well in C++:
		
		string concat (string a , string b ) {
		return a + b;
		} // concat
				This function takes two strings as parameters (by values),
			and returns the result of concatenating them.
				By passing the arguments by value, the function forces a
			and b to be copies of the arguments passed to the function
				when it is called.
			It may mean copying large quantities of data just for the function call.

	string can pass by reference as well in C++:

		string concat (string& a , string& b ) { (pointers)
		return a + b;
		} // concat
			Arguments by reference do not require a copy.
			The function operates directly on (aliases of) the
			strings passed as arguments
			*** the vertion of concat function taking references is more
			efficient than the version taking values (as above example),
			since it does not need to copy expensive-to-copy string.

	const References:

		const modify the references:
		string concat (const string &a, string &b) {
			return a + b;
		} // concat
			this const references for the function to guarantee that its
			reference parameters will not be modified by this function

			By "const" to quantify the parameters as constant. the function
			is forbidden to modify the values of neither a nor b.
			but can access their values as references, 
			w/o to make actual copies of the strings.

	inline functions()

		inline string concat(const string &a, const string &b)
		{
			return a + b;
		} // concat
			This does not change at all the behavior of a function, but is merely used to
			suggest the compiler that the code generated by the function body shall be
			inserted at each point the function is called, instead of being invoked with a
			regular function call.
			
			This informs the compiler that when concat is called, the program prefers
			the function to be expanded inline, instead of performing a regular call.

			Compiler Optimizations:

	Overloaded functions()

		1. Same function names, different parameter types
		2. Same function names, different parameter list(the number of parameters)
		int operate(int a, int b)
		{
			return a * b;
		} // operate
		double operate(double a, double b)
		{
			return a / b;
		} // operate
		*** NOTiCE:
			A function CANNOT be overloaded only by its return type.
			The function's parameter lists MUST be different.f
			OR parameter types MUST be different.

	Default values in function parameters: (see example)
		int divide(int a, int b = 2)
		{
			int r;
			r = a / b;
			return r;
		} // divide

	Prototypes: (see example prototype.cpp)
		The prototype of a function can be declared w/o
		actually defining the function completely before main function
		Giving just enough details to allow the types involved
		in a function call to be known.

		In some cases, the prototypes is required
		when B function is called inside of A function,
		or A function is called inside of B function,
		
	Header Files: (see example headerfile.cpp, oddeven.cpp, oddeven.h)
		Code files:
			with the extension like .cpp or .cc
			also other types of file is called header file
			sometime, as an include file

		Header files:
			always have .h extension.
			the purpose of a header file is to hold declarations
			(often function prototypes) for other files to use.

			Ex.
				oddeven.h, a header file can be included in other files
					#include "oddeven.h"

					*** Since this example has multiple files
						it needs manually compling and running.
					
	Compiling and Running the Header File Example 
		
		1. Compile headerfile.cpp, oddeven.cpp, and oddeven.h at same time
			Compiling:
				g++ -o headerfile headerfile.cpp oddeven.cpp
			Running:
				./headerfile

		2. Compling each source file separately and then linking them together
			to form our executable:
				Compile .cpp files to .o files (temp files)
					g++ -c -o headerfile.o headerfile.cpp
					g++ -c -o oddeven.o oddeven.cpp
					g++ -o headerfile.o oddeven.o
				Running:
					./headerfile
	Recursivity: (遞歸)
		is the property that functions have to be called by themselves.
		is useful for some tasks, such as sorting elements, or calculating
		the factorial of numbers.

		Ex. n! = n * (n - 1)! (see example recursivity.cpp)

		NOTICE:
			The prototype is not necessarily before the function declaration
			even though the function is calling itself.

	VCF Cluster:
		is for running long term processes or programs that my replicate out of control.
		using odin use and password to ssh into any of the cluster nodes.
			ssh vcf0

	Makefile: (see example makefile.cpp functions.h hello.cpp, and factorial.cpp and makefile)
		the special format files that together with the make utility
		will help you to automagically build and manage your projects.

		Compiling Manually:
			Mehtod 1: Preprocess, Compile, and Link all in one go
				g++ -o makefileexample makefile.cpp hello.cpp factorial.cpp
				then
					./makefileexample
			
			Method 2: Preprocess, and Compile each file separately, then Link:
				g++ -c makefile.cpp
				g++ -C hello.cpp
				g++ -C factorial.cpp
				g++ -o makefileexample makefile.o hello.o factorial.o
				then
					./makefileexample

	Function Templates: (see example func_template.cpp)
		A series of parameters separated by commas. 
		These parameters can be generic template types by
		specifying either the class or typename keyword followed by
		an identifier. 
		This identifier can then be used in the function
		declaration as if it was a regular type.

	Scopes:
		

*/

// How to define a function (add() function)

// example for pass by value
int add(int x, int y)
{
	int z = x + y;
	return z;
} // add

// example for pass by reference
void duplicate(int &a, int &b, int &c)
{
	a *= 2;
	b *= 3;
	c *= 4;
} // duplicate

// concat() function
string concat(string a, string b)
{
	// string concat(string& a, string& b)
	// string concat(const string& a, const string&, b) // compiling error

	// modidying for concat() function:
	a.erase(0, 1);
	b.erase(1, 3);
	cout << "Inside of concat(): " << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	return a + b;
} //concat

// // concat() function pass by reference
// string concat(string &a, string &b)
// {
// 	return a + b;
// } // concat()

//Default values in function parameters
int divide(int a, int b = 2)
{
	int r;
	r = a / b;
	return r;
} // divide

int main()
{
	// calli add() function to pass value to it
	int result = add(1, 2);
	cout << "x + y: " << result;

	// call duplicate() function by passing reference
	int x = 5;
	int y = 6;
	int z = 7;
	duplicate(x, y, z); // if a literal value  such as 22 will be an error
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;

	string str_x = "xyz";
	string str_y = "hellp";

	cout << "Before calling concat() function: " << endl;
	cout << "str_x = " << str_x << endl;
	cout << "str_y = " << str_y << endl;

	cout << "After calling concat() function: " << endl;
	// call concat() function
	concat(str_x, str_y);

	// Ranged for loop & pass by reference
	string str_1 = "Hello";
	for (auto &ch : str_1)
	{
		// if ch is 'e', then replaced by 'a'
		if (ch == 'e')
		{
			ch = 'a';
		}
	} // for

	cout << "After Replaced: " << str_1 << endl;

	// call divide function
	cout << divide(12) << endl; // 6
	cout << divide(20, 4) << endl;
	// the result of divide(20, 4) is 5, because the original value
	// of variable b is overwritten by 4.

	return EXIT_SUCCESS;
} // main