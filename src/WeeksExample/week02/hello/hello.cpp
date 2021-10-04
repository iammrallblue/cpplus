#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
	// this is a line comment
	cout << "This is a creative message." << endl;
	cout << "sizeof(int) = " << sizeof(int) << endl;
	cout << "sizeof(long) = " << sizeof(long) << endl;
	cout << "sizeof(long long) = " << sizeof(long long) << endl;
	cout << "sizeof(double) = " << sizeof(double) << endl;
	cout << "sizeof(long double) = " << sizeof(long double) << endl;
	
	signed char c = -3;
	c = c >> 1;
	cout << (int) c << endl;

	return EXIT_SUCCESS;
} // main
