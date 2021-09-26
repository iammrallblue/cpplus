#include <iostream>
#include <array>
#include <cstdlib>

using namespace std;

/*	
	Array and Pointer in C++:

        Arrays:
            An Array is a series of elements of the same type placed
            in contiguous(nearby) memory locations that can be individually
            referenced by adding an index to a unique identifier.

            Ex. int foo[5];
                An Array containing 5 integer values of type int called foo
            *** the index of an array is started from 0.

            Initializing Arrays: (Three ways to create an Array)
                1. int foo[5] = {16,2,77,40,12071};
                2. int foo[5];
                    foo[0] = 16; foo[1] = 2; ...
                3. int foo[] = {16,2,77,40,12071};
                The number of values b/w braces {} shall not be
                greater than the number of elements in the array, [5] 

            Array Access:
                Assign value to the element of an Array:
                    foo[2] = 900; // foo[2] is int type
                assign the element of the an Array to a variable:
                    x = foo[2]; 
            
            Multidimensional Arrays: (see example multidimensionalArrays.cpp)

                Syntax:
                    int x[3][4] = {0, 1 ,2 ,3 ,4 , 5 , 6 , 7 , 8 , 9 , 10 , 11}
                    int x[3][4] = {{0,1,2,3}, {4,5,6,7}, {8,9,10,11}};

                    int x[3][4], it means 3 rows and each row has 4 elements

                char century [100][365][24]
            

		    Array as parameter:
                Array as parameter, it can't pass the entire block of memory
                represented by an Array.
                but what can be passed instead is its address, and it is a much faster
                and more efficient operation.

                Syntax:
                    void foo(int arg[], int length){
                    }
                    the first parameter int arg[] is an int array as parameter

    		Library Arrays:
                Built-in Array:
                    Ex:
                    int main() {
                    int myarray[3] = {10,20,30};
                    for (int i=0; i<3; ++i) ++myarray[i];
                    for (int elem : myarray) cout << elem << endl;
                    } // main

                Standard Template Library Array:
                    Ex:
                    int main() {
                    array<int,3> myarray {10,20,30};
                    for (int i=0; i<myarray.size(); ++i)++myarray[i];
                    for (int elem : myarray) cout << elem << endl;
                    } // main

        Character Sequences:
            The string class is basically a char array,
            By convention, the end of strings represented in character
            sequences is signaled by a special character: the null character,
            which literal value is written as '\0'.

                *** char[] array == string in C++

            Initialization of Null-Terminated Character Sequences:
                Syntax:
                    char myword[] = {'H','e','l','l','o','\0'};
                        the about declares an array of 6 elements of type char,
                        which initialized with the characters that from the word
                        "Hello" + a null character '\0' at the end.
		
                    char myword[] = "Hello";
                        this way to initialize the character array is same result
                        with the above myword[] array
            
            Assignment to Null-Terminated Character Sequences:
                since it is an array, 
                    char myword[] = "Hello";
                    myword = "Bye"; // ERROR, 

                Assign value to each elements of character Array:
                    myword[0] = 'B';
                    myword[1] = 'y';
                    myword[2] = 'e';
                    myword[3] = '\0';
                Assian elements of character Array to a variable:
                	char ch = myword[0];

            String and Null-Terminated Character Sequences: (see example stringDemo.cpp)

                 In C++, even though the standard library defines a specific type for strings
                (class string), still, plain arrays with null-terminated sequences of
                characters (C-strings) are a natural way of representing strings in the
                language; in fact, string literals still always produce null-terminated
                character sequences, and not string objects.

                In the standard library, both representations for strings coexist, and most
                functions requiring strings are overloaded to support both.

                *** Null-Terminated character sequences can be transformed into strings implicitly,
                    and strings can be transformed into null-terminated character sequences by using 
                    either of string's member functions c_str or data: (see example stringDemo.cpp)

        Pointers: (see example pointerDemo.cpp)
            Day05, has details about Pointers.

            Pointers and Arrays: (see example pointerArray.cpp)
                1. The concept of Arrays is related to Pointers.
                2. Arrays work very much like pointers to their first elements, 
                    and, actually, an array can always be implicitly converted 
                    to the pointer of the proper type.
                3. Syntax:
                    int my_arr[20];
                    int *my_ptr;

                    The valid assignment operation:
                        my_ptr = my_arr;
                         After assignment,my_ptr and my_arr would be equivalent 
                         and would have very similar properties. 
                         
                         The main difference being that my_ptr can be assigned a different address,
                            *** whereas my_arr can never be assigned anything, 
                                and will always represent the same block of 20 elements of type int.

                4. Pointers and arrays support the same set of operations, 
                    with the same meaning for both.

                5. The main difference being that pointers can be assigned new addresses, 
                    while arrays cannot.
                
                6. these brackets are a dereferencing operator known as offset operator. 
                    They dereference the variable they follow just as * does, 
                    but they also add the number between brackets 
                    to the address being dereferenced. 
                    For example:
                        a[5] = 0; // a [offset of 5] = 0 
                        *(a+5) = 0; // pointed by (a+5) = 0
                            These two expressions are equivalent and valid, 
                            not only if a is a pointer, but also if a is an array. 
                            *** Remember that if an array, 
                                its name can be used just like a pointer to its first element.

            Pointer Initialization:
                1. Pointers can be initialized to point to specific locations 
                    at the very moment they are defined:
                        int myvar;
                        int * myptr = &myvar;

                2. The resulting state of variables after this code is the same as after:
                        int myvar;
                        int * myptr;
                        myptr = &myvar;
                    
                        When pointers are initialized, what is initialized is the address they 
                        point to (i.e., myptr), never the value being pointed 
                        (i.e., *myptr). Therefore, the code above shall not be confused with:

                            int myvar;
                            int * myptr; *myptr = &myvar;

            Pointer Arithmetic:
                The arithmetical operations on pointers is a little different than 
                to conduct then on regular integer types.

                ONLY addition and subtraction operations are allowed. 
                    (also increment ++, and descrement --)
                    the others make no sense in the world of pointers.
                Both addition and subtraction have a slightly different
                behavior with pointers, according to the size of the data type
                to which they point.
                    such as char always has a size of 1 byte, short is 2 bytes
                    int and long are even larger. the exact size of these being
                    dependent on the system.

                    Ex.
                        char * my_char;
                        short * my_short;
                        long * my_long;

                        and we know that they point to the memory location
                        1000, 2000, and 3000 respectively.

                        if,
                            ++my_char; // points to 1000
                            ++my_short; // points to 2000
                            ++my_long; // points to 3000

                        what are the new values contained in my_char, my_short, my_long?
                            my_char now points to 1001
                            my_short now points to 2002
                            my_long now points to 3004

                Increment and Decrement in Pointer Arithemtic: (see pointerIncrement.cpp and pointerDescrement.cpp)
                    The increment (++) and decrement (--) operators can be 
                    used as either prefix or suffix of an expression, 
                    with a slight difference in behavior (as you know).

                    According to the operator precedent rules, postfix operators
                    such as increment and decrement, have higher precedence than prefix operators,
                    such as the dereference operator (*)
                        *p++; // is equivalent to *(p++);
                        the four possible combinations of the dereference operator
                        with both the prefix and suffix version fo ++ and --
                            *p++; // is equivalent to *(p++);
                            *++p; // same as *(++p);
                            ++*p; // same as ++(*p);
                            (*p)++ // dereference, and post-increment the value
                            it points to

                    A typical but not so simple statement involving these operators is:
                        *p++ = *q++;

                            Because ++ has a higher precedence than *, both p
                            and q are incremented, but because both
                            increment operators (++) are used as postfix and
                            not prefix, the value assigned to *p is *q before
                            both p and q are incremented. And then both are
                            incremented. It would be roughly equivalent to:
                                *p = *q;
                                ++p;
                                ++q;
                                 *** assignament before self increment.

            Pointers and const: (see pointerConst.cpp)
                Pointer can be used to access a variable by its address, and 
                this access may include modifying the value pointed.

                By using "const", to the value to read-only, which means not 
                to modify it.




*/

int main(int argc, char const *argv[])
{
    // array<int, 3> myArr = {1, 2, 3};

    return EXIT_SUCCESS;
}
