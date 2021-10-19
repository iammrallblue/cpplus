#include <iostream>

using namespace std;

// global array's elements are default initialized
int global_array[5];

int main()
{
	// local array's elements are NOT default initialized
	const int n = 5;
	int array[n];
	for (int i = 0; i < n * 2; i++)
	{
		cout << "array[" << i << "] = " << array[i] << endl;
	} // for

	/*
	for (int i = 0; i < 5; i++) {
		cout << "global_array[" << i << "] = " << global_array[i] << endl;
	} // for

	// objects inside an array are default constructed
	string str_array[5];
	for (int i = 0; i < 5; i++) {
		cout << "str_array[" << i << "].size() = " << str_array[i].size() << endl;
	} // for

	int array_2d[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << "array_2d[" << i << "][" << j << "] = " << array_2d[i][j] << endl;
		} // for
	} // for
*/

} // main
