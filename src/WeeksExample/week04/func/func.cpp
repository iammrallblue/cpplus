#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

string concat (const string & a, const string & b)
{
	//erase(starting index, count)
	//a.erase(0, 1);
	//b.erase(1, 2);	

	cout << "Inside concat" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	return a + b;
} // concat

int main()
{
	string x = "xyz";
	string y = "hello";
	
	cout << "Before concat" << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;

	string xy = concat (x, y);

	cout << "After concat" << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "xy = " << xy << endl;
	
} // main
