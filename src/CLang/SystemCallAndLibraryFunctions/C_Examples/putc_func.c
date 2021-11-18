#include <stdio.h>
#include <stdlib.h>

/*
    putc function:
        int putc(int char, FILE *stream)
            writes a character (an unsigned char) specified by
            the argument char to the specified stream and
            advances the position indicator for the stream.

            Parameters
                char − This is the character to be written.
                The character is passed as its int promotion.

                stream − This is the pointer to a FILE object
                        that identifies the stream where
                        the character is to be written.

            Return Value
                This function returns the character written
                 as an unsigned char cast to an int or EOF on error.
*/
int main(int argc, char *argv[])
{
    FILE *fptr; // FILE pointer

    fptr = fopen("emp", "w"); // open the file emp in write-mode

    // dealing the content which will write into the file emp
    for (int i = 33; i < 100; i++)
    {
        putc(i, fptr); // write character from 33 to 99
    }                  // for

    fclose(fptr);

    // reading the content of the file "emp"

    fptr = fopen("emp", "r");
    while (1)
    {
        int ch = fgetc(fptr);
        if (feof(fptr))
        {
            break;
        } // if
        printf("%c", ch);

    } // while

    fclose(fptr);

    return 0;
} // main
