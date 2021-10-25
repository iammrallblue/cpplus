#include <iostream>

using namespace std;

/*
    Question:
        Given an integer number n, return the difference 
        between the product of its digits and the sum of its digits.

    Constraints:
        1 <= n <= 10^5
*/
int substractProductAndSum(int n)
{
    int product = 1;
    int sum = 0;
    int digit; // better?

    while (n > 0)
    {
        digit = n % 10;   // 78 % 10 =  8
        product *= digit; // 1 * 8 = 8
        sum += digit;     // 0 + 8 = 8
        n /= 10;
    } // while

    return product - sum;
} // substractProductAndSum

int main()
{
    int result = substractProductAndSum(78);
    cout << "The sum is: " << result << endl;
} // main