#include <stdio.h>
#include <string.h>

/*
    strstr function in C:

        finds the first occurrence of the substring needle in the string haystack. 
            ** The terminating '\0' characters are not compared.
        
        Syntax:
            char *strstr(const char *haystack, const char *needle) function 
            
        Parameters
            haystack − This is the main C string to be scanned.
            needle − This is the small string to be searched with-in haystack string.

        Return Value
            This function returns a pointer to the first occurrence in haystack 
            of any of the entire sequence of characters specified in needle, 
            or a null pointer if the sequence is not present in haystack.
*/

int main(int argc, char *argv[])
{

    // C-string, char array in c
    const char haystack[20] = "This is the starter.";
    const char needle[20] = "is the";
    char *ch_ptr; // a char pointer

    // char pointer is pointed to char array in memory
    ch_ptr = strstr(haystack, needle);

    printf("What is this: %s\n", ch_ptr);

    char *str_first = "abc defg hijk";
    char *str_second = "efg";
    char *str_res = strstr(str_first, str_second);

    printf("result: %s\n", str_res);
    return 0;
} // main
