#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t longestLine(FILE *fi)
{
    size_t largest = 0, current = 0;
    int ch;

    if (fi)
    {
        while ((ch = fgetc(fi)) != EOF)
        {
            if (ch == '\n')
            {
                if (current > largest)
                    largest = current;
                current = 0;
            }
            else
            {
                current++;
            }
        } // while
        if (current > largest)
            largest = current;
    }
    return largest;
} // longestline

int main(int argc, char const *argv[])
{
    FILE *fptr;
    fptr = fopen("test7", "r");
    size_t longest_len = longestLine(fptr);
    printf("The Longest Line is %zu", longest_len);

    return 0;
} // main
