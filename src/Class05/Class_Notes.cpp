#include <iostream>
#include <cstdlib>
#include <bitset>

using namespace std;
/*
	Bitwise Operators:
		& AND 	(Bitwise AND),
		| OR  	(Bitwise OR), 
		^ XOR 	(Bitwise exclusive OR), 
		~ NOT 	(Unary complement or Bit inversion),
		<< SHL	(Shift bits left), 
		>> SHR 	(Shift bit right,

		In other words, bitwise operators manipulate 
						individual bits within a variable

		Why bother with Bitwise Operators?
			- In the past, memory was extremely expensive,
				computers did not have much of it, Consequently,
				there were incentives to make use of every bit of
				memory available.
			- Consider the bool data type - even though it can be represented
				by single bit, but still takes up an entire bytes of memory
				b/c variables need unique addresses, and memory can only be
				addressed in bytes. the bool uses 1 bit and the other 7 go to waste.
			- Using bitwise operators, it is possible to write function that
				allow us to compact 8 booleans into a single byte-sized variable, 
				enabling significant memory savings at hte expense of more complext code.
			- Nowadays, it is good to at least know about their existence.
		
		Operators		Symbol		Form		Operation
		Left shift 		  << 		x << y 		All bits in x shifted left y bits
		Right shift 	  >>	 	x >> y 		All bits in x shifted right y bits
		Bitwise NOT		  ~			~x 			All bits x flipped
		Bitwise AND		  &			x & y 		Each bit in x AND each bit in y
		Bitwise OR 		  |			x | y 		Each bit in x OR each bit in y
		Bitwise XOR 	  ^			x ^ y 		Each bit in x XOR each bit in y

        For Examples of Left Shift and Right Shift << , >>

            The number 3 which is the binary 0011. 
                1. left shifting by 1 (3 << 1) changes 0011 to 0110,
                    which is decimal 6

                2. left shifting by 2 (3 << 2) changes 0011 to 1100, 
                    which decimal is 12
                
                3. left shifting by 3 (3 << 3) changes 0011 to 1000,
                    which decimal is 8
                    Notice:
                        the bits shifted a bit off the end of the number!
                        bits that are shifted off the end of the binary
                        number are lost.
                        but if more than 4 bits are vailable in the example
                        we would not have lost a bit.

                4. right shifting by 1 (3 >> 1) changes 0011 to 0001, 
                    which decimal is 1.
                    The rightmost bit shifted off the end and was lost.

	    Bitwise NOT (~)

			1. Simply flips each bit from a 0 to a 1 or vice versa
            2. Note that the result of a "bitwise NOT" is dependent on 
                what size of your data type is!
                    For example:
                        with 4 bits (binary 0100, number is 4), ~4 (binary 1011, number is 11)
                        with 8 bits (binary 0000 0100, number 4), ~4(binary 1111 1011, number 251)
			
		Bitwise AND, OR, and XOR

            5 & 6 (AND)

            0101 // 5
            0110 // 6
            ----
            0100 // 4


            5 | 6
            0101 // 5
            0110 // 6
            ----------
            0111 // 7

            5 ^ 6
            0101 // 5
            0110 // 6
            --------
            0011 // 3


        Compund XOR
            - It is also possible to evaluate compound XOR
                expression column style, such as 1 ^ 3 ^ 7.
            - If there are an even number of 1 bits in a column, 
                the result is 0.
            - If there are an odd number of 1 bits in a column, 
                the result is 1. 

                0001 // 1
                0011 // 3
                0111 // 7
                ---------
                0101 // 5

                0111
                0111 XOR
                ----
                0000 // 0

	Masks in C++:
		A mask is data that is used for bitwise operations
			a mask is just a number...
        
        Using a mask, multiple bits in a variable can be set
        either on, off or inverted from on to off( or vice versa)
        in a single bitwise operation.

        Masking Bits to 1:
            to turn certain bits on, the bitwise OR operation
            can be used, following the principle that Y or 1 = 1
            and Y or 0 = Y.

            Therefore, to make sure a bit is on, OR can be used with a 
            1. to leave a bit unchanged , OR is used with a 0.

            Example, masking "on" the higher bits (bits 4, 5, 6, 7),
            leaving the  lower bits (bits 0,1,2,3) unchanged.

                    1001 0101 1010 0101
                OR  1111 0000 1111 0000
                =   1111 0101 1111 0101

        Masking Bits to 0:
            More often, in practice, bits that are to be ignored are 
            "masked off" (or masked to 0) rather than "masked on" (or masked to 1). 
            There is no way to change a bit from on to off using the OR operation. 
            Instead, bitwise AND is used.
            
            When a value is ANDed with a 1, the result is simply the original value, 
            as in: Y AND 1 = Y. However, ANDing a value with 0 is guaranteed to 
            return a 0, so it is possible to turn a bit off by ANDing it with 0: 
            Y AND 0 = 0. To leave the other bits alone, ANDing them with a 1 can be done.

            Example: Masking “off” the higher bits (bits 4, 5, 6, 7), 
            leaving the lower bits (bits 0, 1, 2, 3) unchanged.
            
                    1001 0101 1010 0101 
                AND 0000 1111 0000 1111
                  = 0000 0101 0000 0101
	a mask with all 0s or 1s

	unsigned int mask1 = 0

	unsigned int mask2 = ~0
*/
int main()
{
    /*
        Left shift code example:
            Decimal         Binary
                4           0b0000'0100
                8           0b0000'1000
    */
    unsigned char n = 4;
    cout << "the original n is: " << (short)n << endl;

    n = n << 1;
    cout << "after left shifting n is: " << (short)n << endl;

    /* 
        Left shift code example:
            Decimal         Binary
                12           0b0000'1100
                24           0b0001'1000
        It did not lost bits.
    */
    unsigned char x = 12;
    cout << "the original x is: " << (short)x << endl;

    x = x << 1; // left shifting by 1
    cout << "after left shifting x is: " << (short)x << endl;

    /*
        Left shift code example:
            Decimal     Binary
            140         0b1000'1100 // left shifting lost 1 bit.
            24          0b0001'1000

   */
    unsigned char y = 140;
    cout << "The original y is: " << (short)y << endl;

    y = y << 1;
    cout << "After shifting y is: " << (short)y << endl; // 24

    /*
        Right shift code example:
            Decimal     Binary
            4           0b0000'0100
            2           0b0000'0010
    */
    unsigned char z = 4;
    cout << "The original z is: " << (short)z << endl;

    z = z >> 1;
    cout << "After shifting z is: " << (short)z << endl;

    /*
        Right shift code example:
            Decimal     Binary
            5           0b0000'0101
            2           0b0000'0010
    */
    unsigned char a = 5;
    cout << "The original a is: " << (short)a << endl;

    a = a >> 1;
    cout << "After shifting a is: " << (short)a << endl;

    /*
    Bitwise NOT code example:
    Decimal     Binary
    4           0b0000'0100
    251         0b1111'1011
    */
    unsigned char b = 4;
    cout << "The original b is: " << (short)b << endl;
    cout << "Showing 8 bits of 4: " << bitset<8>(b) << endl;

    b = ~b;
    cout << "After negating b is: " << (short)b << endl;
    cout << "After shifting 8 bits of 4: " << bitset<8>(b) << endl;

    return EXIT_SUCCESS;
}