#include <iostream>
#include <cstdlib>
// #include <stringstream>
#include <sstream>

using namespace std;

/*
	Basic I/O in C++:
        1. A convenient abstraction called "streams" to perform input and output operations.
        2. A stream is an entity where a program can either insert or extract characters to/from
        3. The standard library (in <iostream>) defines a handful of stream objects
            #include <iostream>
        
            Streams        Description
            cin            Standard input stream
            cout           Standard output stream
            cerr           Standard error (output) stream
            clog           Standard Logging (output) stream
	
        Standard Output:
            1. The stream object defined for output is "cout".
			2. *** "<<" is the multiple insertion operations

			3. chain string and integer together
				cout << "I am " << age << "years old..."

	    Standard Input:
            1. The stream object defiend for input is "cin" 
            2. *** ">>" the extraction operation uses with "cin" 
                int age = 10;
                cin >> age;

		    Chaining input together by >> 
                cin >> a >> b;
                is equ. to
                cin >> a;
                cin >> b;
	
	        "cin" and Strings:
                string mystring;
                cin >> mystring;

		    getline() function,
                To get an entire line from cin

		    stringstream:
			    the standard header <sstream> defines a type called stringsteram
	
    Statements and Flow Control:

        continue with while loop:
        goto example: !!! not applying for csci730 projects

        switch in cpp examples

*/

int main()
{
    /* code */
    int age = 10;
    cout << "I am " << age << " years old." << endl;

    // double height = 0;
    // cin >> age >> height;

    // getline() function
    string name;

    cout << "What is your Name: " << endl;
    getline(cin, name);
    cout << "Hello, " << name << endl;

    // string stream, split a string into two then assign the split values to different variable
    string str = "12 14";
    int n, m;
    stringstream ss(str); // the value of str is "12 14"
    ss >> n;
    cout << "" << (n * 2) << endl;
    ss >> m;
    cout << " " << (m * 2) << endl;

    return 0;
}