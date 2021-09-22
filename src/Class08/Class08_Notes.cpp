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
			return EXIT_SUCCESS; // same as return a 0
		
		6. Pass by value:
			See add() function

		7. Pass by reference:
			See void duplicate() Function
			int & a;
			a* = 2;
			
		8. Ranged For Loop & Pass by Reference
	bash:
		echo $?
		will return 1.

makefile:
	NAME = func

compile: $(NAME).cpp
	g++ -o $(NAME) $(NAME)


func.cpp
	
	ranged for loop & pass by reference: 

	string can pass by value as well in c++
		string concat (string a , string b ) {
		return a + b;
		} // concat

		string concat (string& a , string& b ) { (pointers)
		return a + b;
		} // concat

	const

	#define 


	inline functions()

		inline string concat(const string& a, const string& b) {
			return a + b;
		} // concat

	overloaded functions()

		same function name, different parameters
		same function name , different parameter list (the number of parameter)
		
	default values in function parameters:
		int divide(int a, int b =2 ) {
		int r;
		r = a/ b;
		return r;
		} // divide

	header files

		oddeven.h
			 # ifndef 
			 # define

			 #endif

		main.cpp
			#include
			#include

	
		oddeven.cpp
	
	Complie multple .cpp files 

		g++ -o example oddeven.cpp main.cpp
		./exmaple


*/

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
	return EXIT_SUCCESS;
} // main
