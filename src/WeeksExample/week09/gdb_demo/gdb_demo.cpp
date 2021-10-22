#include <iostream>

using namespace std;

bool DEBUG = false;

int divide (int a, int b)
{
	return a / b;
} // divide

int main()
{
	cout << "This is the first line" << endl;
	
	cout << "Getting ready to diide by 0" << endl;
	
	int x = 7;
	int y = 1;
	
	if (DEBUG) cout << "debugging statement before calling divide" << endl;
	int q = divide(x, y);
	if (DEBUG) cout << "debugging statement after calling divide" << endl;
	
	cout << x << " / " << y << " = " << q << endl;

	cout << "This is the last line" << endl;
} // main
