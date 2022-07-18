#include <iostream>
#include <math.h>
#include <iomanip>
#include <chrono>
using namespace std::chrono;
using namespace std;

// prototypes
static double bisectionFunction(double x); // bisectionFunction f(x)
void menu();

int main()
{

    double a; // Lower Guess or beginning of interval
    double b; // Upper Guess or end of interval
    double c; // variable for midpoint
    double precision;

    cout << "\n\n\nbisectionFunction f(x) = x^3 + 4x^2 - 10  " << endl;

    // Taking Input
    cout << "Enter begining of interval: ";
    cin >> a;
    cout << "\nEnter end of interval: ";
    cin >> b;
    cout << "\nEnter precision of method: ";
    cin >> precision;

    // Check for opposite sign (Intermediate Value Theorem)
    if (bisectionFunction(a) * bisectionFunction(b) > 0.0f)
    {
        cout << "\nbisectionFunction has same signs at ends of interval";
        return -1;
    }

    int iter = 0;
    cout << setw(3) << "\niterations (i)" << setw(8) << "a" << setw(16) << "b" << setw(25) << "bisectionFunction(c)" << endl;

    auto start = high_resolution_clock::now();

    do
    {
        c = (a + b) / 2.0f;

        iter++;
        cout << setprecision(10) << setw(3) << iter << setw(19) << a << setw(17) << b << setw(22) << bisectionFunction(c) << endl;

        // check for opposite sign
        if (bisectionFunction(a) * bisectionFunction(c) < 0.0f)
        {
            b = c;
        }
        else
        {
            a = c;
        }
    } while (fabs(bisectionFunction(c)) >= precision); // terminating condition

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "\n\nRoot = " << c << endl;
    cout << "f(x)=" << bisectionFunction(c) << endl;
    cout << duration.count() << " microseconds" << endl;

    return 0;

} // main

static double bisectionFunction(double x)
{
    return pow(x, 3) + 4 * pow(x, 2) - 10;
} // bisectionFunction
