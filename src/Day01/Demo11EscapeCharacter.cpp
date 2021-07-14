#include <iostream>

using namespace std;

/*
    Escape sequences (Escape Character):

        Escape sequence	            Description	            Representation
                            Simple escape sequences
                \'	                single quote	        byte 0x27 in ASCII encoding
                \"	                double quote	        byte 0x22 in ASCII encoding
                \?	                question mark	        byte 0x3f in ASCII encoding
                \\	                backslash	            byte 0x5c in ASCII encoding
                \a	                audible bell	        byte 0x07 in ASCII encoding
                \b	                backspace	            byte 0x08 in ASCII encoding
                \f	                form feed - new page	byte 0x0c in ASCII encoding
                \n	                line feed - new line	byte 0x0a in ASCII encoding
                \r	                carriage return	        byte 0x0d in ASCII encoding
                \t	                horizontal tab	        byte 0x09 in ASCII encoding
                \v	                vertical tab	        byte 0x0b in ASCII encoding
                            Numeric escape sequences
                \nnn	        arbitrary octal value	    byte nnn
                \xnn	        arbitrary hexadecimal value	byte nn
                            Conditional escape sequences[1]
                \c	                Implementation-defined	Implementation-defined
                            Universal character names
                \unnnn	            arbitrary Unicode value;
                    may result in several code units	code point U+nnnn
                \Unnnnnnnn	arbitrary Unicode value;
                    may result in several code units	code point U+nnnnnnnn
*/

int main()
{
    // \n == endl
    cout << "Hello Bella \n";

    // (\\)
    cout << "\\ \n"; // print a single "\"

    // \t
    cout << "Text does not have \\t" << endl;
    cout << "Text\t does\t have\t \\t. " << endl;
    return 0;
}
