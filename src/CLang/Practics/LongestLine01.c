#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    // file pointer
    FILE *fptr;
    int longest_length = 0;
    int length = 0;
    int index = 0;
    char c;
    char ch[1000];
    char max_ch[1000];

    // array for test files
    char *test_files_array[] = {"test1", "test2", "test3", "test4", "test5", "test6", "test7"};

    // get the length of the array
    int length_of_array = sizeof(test_files_array) / sizeof(test_files_array[0]);

    for (int i = 0; i < length_of_array; i++)
    {
        // read a file from the array
        fptr = fopen(test_files_array[i], "r");

        if (fptr == NULL)
        {
            printf("Error ! File cannot be opened. \n");

            exit(1);
        } // if

        index = 0;

        while ((c = fgetc(fptr) != '\n' && c != EOF))
        {
            if (feof(fptr))
            {
                break;
            }
            ch[index++] = c; // store each character to ch[] array

            length = index;
            if (longest_length < length)
            {
                longest_length = length;
                strcpy(max_ch, ch);
            } // if
            if (c == '\n')
            {
                break;
            }
        } // while

        ch[index] = 0; // reset to 0 for next file

        fclose(fptr); // close file

        printf("%d\n", longest_length);

    } // for

    return 0;
} // main
