#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char str[] = "This is a C String";
	cout << str << endl;
	cout << sizeof(str) << endl;
	
	const char* ptr = str;
	cout << *ptr << endl;
	cout << sizeof(ptr) << endl;

	// the const before char will cause a syntax error
	//*(ptr + 1) = '@';
	//ptr[2] = '$';
	//cout << str << endl;
	
	// the const before ptr will cause a syntax error
	//ptr++;

	cout << "strlen(ptr) = " << strlen(ptr) << endl;
	
	unsigned int size = strlen(str);
	for (unsigned int i = 0; i < size; i++) {
		//cout << *(ptr + i);
		cout << ptr[i];
		//cout << *ptr++;
	} // for
	cout << endl;
	
} // main
