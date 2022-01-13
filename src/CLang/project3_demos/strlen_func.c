#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    strlen function in C:


*/
int main(int argc, char const *argv[])
{
    // example 1
    char ch[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', '\0'}; // a c-string

    // get the lenth of c-string ch
    printf("The length of the c-string ch is: %zd\n", strlen(ch));
    // 7 is the length, \0 is not counted.

    // example 2
    char str[] = "ggp3"; // c-string

    printf("The length of the c-string ch is: %zd\n", strlen(str)); // the length is 4

    // example 3 pointer
    char *str2 = "abcd1234";
    printf("The length of the c-string ch is: %zd\n", strlen(str2)); // the length is 4
    return 0;
} // main
