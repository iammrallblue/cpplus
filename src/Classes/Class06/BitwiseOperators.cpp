#include <iostream>
#include <bitset>

using namespace std;

/*
    Bitwise Operators in C++
        In C++, bitwise operators are used to perform operations on individual bits. 
        They can only be used alongside char and int data types.

        Operator        Description
            &	        Binary AND
            |	        Binary OR
            ^	        Binary XOR
            ~	        Binary One's Complement
            <<	        Binary Shift Left
            >>	        Binary Shift Right

    Other Operators in C++:
        Here's a list of some other common operators available in C++. 
        We will learn about them in later tutorials.

        Operator	        Description	                                Example
        sizeof	            returns the size of data type	            sizeof(int); // 4
        ?: 	                returns value based on the condition	    string result = (5 > 0) ? "even" : "odd"; // "even"
        &	                represents memory address of the operand	&num; // address of num
        .	                accesses members of struct variables or     s1.marks = 92;
                            class objects	
        ->	                used with pointers to access 
                            the class or struct variables	            ptr->marks = 92;
        <<	                prints the output value	                    cout << 5;
        >>	                gets the input value	                    cin >> num;

*/

int main()
{
    // Bitwise AND &
    int x = 4;
    int y = 8;

    cout << "x is: " << x << endl; // 4
    cout << "y is: " << y << endl; // 8

    // x to binary by bitset<> and to_string() function
    string b_number = bitset<8>(x).to_string();
    cout << "The binary of 4 is: " << b_number << endl;
    // y to binary
    string b_number2 = bitset<8>(y).to_string();
    cout << "The binary of 8 is: " << b_number2 << endl;

    int b_and = (x & y);
    cout << "a & b is: " << b_and << endl; // 0

    /*
        4 is 00000100
        8 is 00001000 &
        ----------------
             00000000 which is 0
    */

    // Bitwise OR |
    int b_or = (x | y);
    cout << "a | b is: " << b_or << endl;

    /*
        4 is 00000100
        8 is 00001000 |
        ----------------
             00001100 which is 0
    */

    // Bitwise XOR ^
    int b_xor = (x ^ y);
    cout << "a ^ b is: " << b_xor << endl;

    /*
        4 is 00000100
        8 is 00001000 ^
        ----------------
             00001100 which is 0
    */

    // BItwise NOT ~
    int b_not = (~x);

    // ~x to binary
    string b_number3 = bitset<8>(~x).to_string();
    cout << "The binary of ~x (~4) is: " << b_number3 << endl; // 11111011
    cout << "~x is: " << b_not << endl;                        // binary 11111011 which is -5

    // Right shift example >>
    int z = 212;

    // "Right shift example."
    cout << "Shift Right: " << endl;

    // z to binary
    string b_number4 = bitset<8>(z).to_string();
    cout << "The binary of 212 is: " << b_number4 << endl; // 11010100

    // 106 to binary
    cout << "The binary of 106 is: " << bitset<8>(106).to_string() << endl; // 01101010

    // 53 to binary
    cout << "The binary of 106 is: " << bitset<8>(53).to_string() << endl; // 00110101

    // Using for loop for shifting int z right from 0 bit to 3 bits
    for (int i = 0; i < 4; i++)
    {
        cout << "212 >> " << i << " = " << (212 >> i) << endl; // i = 0, 212 is unchanged.
    } // for
}

/*

    // Using for loop for shifting num right from 0 bit to 3 bits 
    for (i = 0; i < 4; i++) {
        cout << "212 >> " << i << " = " << (212 >> i) << endl;
    }

    // Shift Left Operation
    cout << "\nShift Left:" << endl;

    // Using for loop for shifting num left from 0 bit to 3 bits
    for (i = 0; i < 4; i++) {
        cout << "212 << " << i << " = " << (212 << i) << endl;
    }

    return 0;
*/