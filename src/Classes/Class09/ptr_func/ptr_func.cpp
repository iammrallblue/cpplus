#include <iostream>

using namespace std;

int y = 18;

void printBanner()
{
	cout << "##################################" << endl;
} // printBanner

void passPtr (int* ptr)
{
	*ptr = 1;
	int y;
	ptr = &y;
} // passPtr

void passIntRef (int& xr)
{
	xr = 2;
} // passIntRef

void passPtrRef (int*& ptr)
{
	*ptr = 3;
	//int y;
	ptr = &y;	
} // passPtrRef


int main ()
{
	int  x 	   = 27;
	int* x_ptr = &x;

	printBanner();
	cout << "Before calling passPtr()" << endl;
	cout << "x = " << x << endl;
	cout << "x_ptr = " << x_ptr << endl;
	
	passPtr (x_ptr);

	cout << "After calling passPtr()" << endl;
	cout << "x = " << x << endl;
	cout << "x_ptr = " << x_ptr << endl;
	printBanner();

	cout << endl;

	printBanner();
	cout << "Before calling passIntRef()" << endl;
	cout << "x = " << x << endl;
	
	passIntRef (x);

	cout << "After calling passIntRef()" << endl;
	cout << "x = " << x << endl;
	printBanner();

	cout << endl;

	printBanner();
	cout << "Before calling passPtrRef()" << endl;
	cout << "x = " << x << endl;
	cout << "x_ptr = " << x_ptr << endl;
	
	passPtrRef (x_ptr);

	cout << "After calling passPtrRef()" << endl;
	cout << "x = " << x << endl;
	cout << "x_ptr = " << x_ptr << endl;
	printBanner();

} // main
