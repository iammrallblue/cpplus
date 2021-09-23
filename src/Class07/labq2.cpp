#include <iostream>
#include <cstdlib>
// #define MAX_VALUE = 100000

using namespace std;

/*
     primesum.cpp: Let the user input a single integer n where 1 ≤ n ≤ 100000. 
     Your program should print the sum of the first n prime numbers. 
     In the first example below, the first 5 prime numbers are 2, 3, 5, 7, and 11.
     
     Enter integer: 5
         Prime sum: 28
     
     Enter integer: 100000
         Prime sum: 62260698721
*/

int main()
{
    int input, counter, i, j;
    long int sum;

    // Enter a number of times for getting prime numbers
    cout << "Enter an positive integer: (1 to 100000)" << endl;
    cin >> input;

    counter = 0;
    i = 2;
    sum = 0;

    // loop n (input) of times to get prime number and its sum
    while (counter < input)
    {
        // determine numbers are prime or not.
        // j starts from 2 because 0 and 1 are not primes.
        for (j = 2; j <= i; j++)
        {
            // not prime number break.
            if (i % j == 0)
            {
                break;
            }

        } // for

        // if i is a prime, then sum up. ++counter
        if (j == i)
        {
            sum += i;
            ++counter;
        }
        ++i;
    } // while
    
    cout << "The sum of " << input << " primes is: " << sum << endl;

    return EXIT_SUCCESS;
} // main

// int main()
// {
//     // version 1
//     int input = 0, max_value = 100000;
//     int x = 0, y;
//     long int sum;

//     bool is_prime;
//     // input a number w/i range from 1 to 100000
//     cout << "Enter a positive integer: " << endl;
//     cin >> input;

//     // get first of nth primes
//     for (int i = 2; x < input; i++)
//     {
//         // determine the number is a prime number or not.
//         for (int j = 2; j <= i / 2; j++)
//         {
//             is_prime = false;
//             if (i % j == 0)
//             {
//                 is_prime = true;
//                 break;
//             }
//         } // inner for

//         if (is_prime == false)
//         {
//             sum += i;
//             x++;
//         }
//     } // outer for
//     cout << "The sum of " << input << " primes is: " << sum << endl;

//     return EXIT_SUCCESS;
// } // main
