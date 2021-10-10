#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Please enter the size of your array: ";
	cin >> n;

	// the compiler on odin can handle it, but this is not the strict
	// C++ standard and portability not guaranteed.	
	//int array[n];

	int* array = new int[n];

	for (int i = 0; i < n; i++) {
		cout << "Enter an int for index " << i << ": ";
		cin >> array[i];
	} // for
	
	cout << "You've entered the following: " << endl;
	for (int i = 0; i < n; i++) {
		cout << array[i] << '\t';
	} // for
	cout << endl;

	delete[] array;

} // main
