#include <iostream>
#include <ctime>

using namespace std;

/*
    C++ Do/While Loop
        The Do/While Loop
            The do/while loop is a variant of the while loop.
            This loop will execute the code block once, 
            before checking if the condition is true, 
            then it will repeat the loop as long as the condition is true.

        example narcissistic number:
            find all narcissistic numbers from 100 ~ 999
            1^3 + 5^3 + 3^3 = 153
            1^3 = 3
            5^3 = 125
            3^3 = 27
            3+125+27 =153

            2. get digits, tens, hundreds, 
                digits, 153 % 10 = 3 modulus by 10 to get remainded
                tens, 153 / 10 = 15, then 15 % 10 = 5 
                hundred, 153 / 100 = 1
*/

int main()
{
    int value = 0;
    do
    {
        cout << value << endl;
        value++;
    } while (value < 10);

    // example narcissistic number
    // print out numbers from 100 to 999 by do.. while loop
    int nar_number = 100;
    cout << "These numbers are Narcissistic numbers from 100 to 999" << endl;
    do
    {
        // three variables for digits, tens, and hundreds
        int digit = 0;
        int tens = 0;
        int hundreds = 0;
        digit = nar_number % 10;
        tens = (nar_number / 10) % 10;
        hundreds = nar_number / 100;

        
        // determine numbers whether a narcissistic number or not by if statement
        // if the addition of digit^3, tens^3, hundreds^3 is equal to nar_number, which is Narcissistic number.
        if (digit * digit * digit + tens * tens * tens + hundreds * hundreds * hundreds == nar_number)
        {
            cout << nar_number << endl;
        }

        nar_number++;
    } while (nar_number < 1000);
    return 0;
}