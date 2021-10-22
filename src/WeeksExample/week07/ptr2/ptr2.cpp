#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int   x    = 18;
	int*  ptr  = &x;
	int** ptr2 = &ptr;

	cout << "x    = " << x << " at address " << &x << endl;
	cout << "ptr  = " << ptr << " at address " << &ptr << endl;
	cout << "ptr2 = " << ptr2 << " at address " << &ptr2 << endl;
	
	ptr = nullptr;
	ptr2 = 0;

	cout << "ptr = " << ++ptr << endl;
	//cout << "*ptr " << *ptr << endl;
	cout << "ptr2 = " << ++ptr2 << endl;
} // main
