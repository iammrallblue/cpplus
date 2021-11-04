#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // file pointer
    FILE *fptr;
    char str[1000];
    // char ch;
    char *test_files_array[] = {"test1", "test2", "test3", "test4", "test5", "test6", "test7"};

    // the length of test_files_array
    int length_of_array = sizeof(test_files_array) / sizeof(test_files_array[0]);

    for (int i = 0; i < length_of_array; i++)
    {

        fptr = fopen(test_files_array[i], "r"); // read files one by one

        if (fptr == NULL) // prompt error if files don't present
        {
            printf("Error, File cannot be opened. \n");

            exit(1);
        } // if

        // get all lines from files
        while ((fgets(str, sizeof(str), fptr)) != NULL)
        {

        } // while

        printf("%s\n", str); // print last line of the test files

        // while ((ch = fgetc(fptr)) != EOF)
        // {
        //     if (fgetc(fptr) == EOF)
        //     {
        //         printf("%c", ch);
        //     }
        //     // printf("%c", ch);
        // }

        fclose(fptr); // close file
    }                 // for
    return 0;
} // main
