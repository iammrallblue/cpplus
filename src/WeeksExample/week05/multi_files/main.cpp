#include <iostream>
#include <cstdlib>
#include "functions.h"

using std::cout;
using std::endl;

int main() {
    print_hello();
    cout << "The factorial of 5 is " << factorial(5) << endl;
    return EXIT_SUCCESS;
} // main

