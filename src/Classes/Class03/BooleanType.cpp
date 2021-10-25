#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    bool b1, b2, b3;
    b1 = false;     // 0
    b2 = b1 || !b1; // 0 || !0, result is 1

    b3 = b2 && (b1 || true); // 1 && (0 || 1), b3 is 1.

    cout << "b1 is: " << b1 << endl;

    cout << b2 << endl;

    cout << "b3 is: " << b3 << endl;

    // Artimetch expressions can be the condition of the boolean statement
    int x = 8;
    bool b4;
    b4 = (x < 5); // false, x is 8 greater than 5

    cout << "b4 is: " << b4 << endl; // result is 0

    // example
    bool p, q;
    p = true;
    q = false;
    bool r = !(p || q); // false

    cout << "!(true || flase): " << r << endl; // result is false.
    
    return 0;
}
