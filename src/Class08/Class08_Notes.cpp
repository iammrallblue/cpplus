#include <iostream>

using namespace std;

/*
	Functions in c++:
		1. No needed defining inside classes

	bash:
		echo $?
		will return 1.

	pass by reference (pointers)

		int & a;

		a* = 2;

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

		same funciton name, different parameters
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


void duplicate(int& a)
{
	a *= 2;
}
int main(){

	int x = 5;
	duplicate(x); // if a literal value  such as 22 will be an error
	cout << "x = " x << endl;

	return EXIT_SUCESS;
}// main



#include <iostream>
#include <string>

using namespace std;

void duplicate(int& a)
{
	a *= 2;
} // duplicate


string concat(string a, string b) {
// string concat(string& a, string& b)
// string concat(const string& a, const string&, b) // compiling error

	// modidying for concat() function:
	a.erase(0,1);
	b.erase(1,3);
	cout << "Inside of concat(): " << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	return a + b;
} //concat


int main(){

	int x = 5;
	duplicate(x); // if a literal value  such as 22 will be an error
	cout << "x = " x << endl;

	stirng x = "xyz";
	stirng y = "hellp";

	cout << "Before calling concat() function: " << endl;
	cout << "x = " << x << enc

	return EXIT_SUCESS;
}// main