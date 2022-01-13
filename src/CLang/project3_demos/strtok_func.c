#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

    strtok function in C:
        breaks string str into a series of tokens using the delimiter delim.

        Syntax:
            char *strtok(char *str, const char *delim)
        

Declaration
    Following is the declaration for strtok() function.
        char *strtok(char *str, const char *delim)

Parameters
    str
        − The contents of this string are modified and broken
            into smaller strings (tokens).

    delim
        − This is the C string containing the delimiters.
            These may vary from one call to another.

Return Value
    This function returns a pointer to
    the first token found in the string.
    ** A null pointer is returned if there are no tokens left to retrieve.

*/

int main(int argc, char *argv[])
{
    // char array, c-string
    char str[80] = "this is an example of strtok function - knot - knot - talk.";
    const char ch[2] = "-";

    char *token; // token pointer

    // get the first token
    token = strtok(str, ch); // using while loop iterating.

    // iterating token
    while (token != NULL)
    {
        printf(" %s\n", token);

        token = strtok(NULL, ch); // the condtion of terminataion
    } // while

    return 0;
}
