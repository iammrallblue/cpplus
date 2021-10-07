/*
Class 03

	Toolset and Complication Model in C and C++:
		- you don't need a VM to execute code
		- the result of a build is an executable file
			that will run on the native OS (Linux/MacOS)

	Basics of Typical C++ Environment:
		Phases of C++ Programs:
		1. Edit
		2. Preprocess
		3. Compile
		4. Link
		5. Load
		6. Execute

	Preprocessor in C++:
		- Preprocessor are header files, which provide
			declarations for library objects
		- May alsoneed to use using decorations to provide
			short names.
		- Syntax:
			#include <string>
			#include <iostream>
			#define T 20;??
			using namespace std;
		- C and C++ takes much longer to compile than Java 
			b/c include statements require a great deal of parsing(解析)

	Memory Allocation in C++:
		- you must deallocate memory that was allocated
		- int*p_int = new int;
			// use p_int
			delete p_int; // deallocated
		- *** Manually free allocated memory, also be familiar with more low
			level manipulation such as Pointer Arithmetic.

	Memory Deallocation:
		- *** Program designs need to be more care about who actually owns memory,
			and who is responsible for freeing it.
				Ex. 
					Developers have to decide if the data structure is responsible 
					for freeing that memory, or if some other code that uses that
					structure has the responsibility to free that memory.

	*** pointers

	CPP files:

		hello.cpp  filename.extension

	Identifiers in C++:
		A valid identifier is a sequence of one or more letters, digits,
		or underscore character(_);

	Reserved Identifiers:
		alignas, alignof, and, and_eq, asm, auto, bitand, bitor, bool, 
		break, case, catch, char, char16_t, char32_t, class, compl, 
		const, constexpr, const_cast, continue, decltype, default, 
		delete, do, double, dynamic_cast, else, enum, explicit, export, 
		extern, false, float, for, friend, goto, if, inline, int, long, 
		mutable, namespace, new, noexcept, not, not_eq, nullptr, operator, 
		r, or_eq, private, protected, public, register, reinterpret_cast, 
		return, short, signed, sizeof, static, static_assert, static_cast, 
		struct, switch, template, this, thread_local, throw, true, try, 
		typedef, typeid, typename, union, unsigned, using, virtual, void, 
		volatile, wchar_t, while, xor, xor_eq

	Case Sensitivity in C++:
		The C++ language is a "case sensitive" language
			Ex. "int Age = 10;" is not the same with
				"int age = 10;"
				"result" is not the same with "RESULT"
	C++

		using namespace std;
			commute with compile such as where the cout from.
		
		header <limits> , <cstdint>

		Data types:
			unsigned int
			00000000( 0-255)
			11111111 

			signed (-128-127)
			recommended 

		Functions:
			sizeof();


*/ 

#include <iostream> // --> preprocessor directive
#include <cstdlib>
/*
	Message to the C++ Preprocessor lines beginning with #
	are preprocessor directives
	such that #include <iostream> tells preprocessor to include
	header file <iostream> for input/ouput operations
*/
using namespace std; // using directive
/*
	import elements which will be used in codes.
		Ex. cout is from std, therefore,
			using namespace std; this statement is necessary 
*/

/*
	main() function:

		1. C++ can have one or more functions,
			but one of which MUST be main

		2. Parenthesis main() are used to indicate a function

		3. int means that main "returns" an integer value.

		4. cout << "Hello, C++." << endl; it is called a statement
			cout:
				- standard output stream object
				- "connected" to the screen (display)
				- std a namespace 
			<<:
				<< is the stream insertion operator

			endl:
				a constant for "\n", the escaped new line character.
		5. A statement MUST end with a semicolon;

		6. EXIT_SUCCESS, it is 0;
			it made available by including <cstdlib> header file
*/
int main() {
	// this is a comment in c++.
	cout << "Hello, C++." << endl; // endl is \n, a new line character
	return EXIT_SUCCESS; // a constant for 0.
} // main