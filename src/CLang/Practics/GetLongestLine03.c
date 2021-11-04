#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LENGTH 1000

int main(int argc, char const *argv[])
{
    FILE *fptr;
    fptr = fopen("test1", "r");

    if (fptr == NULL)
    {
        printf("Error ! File cannot be opened. \n");

        exit(1);
    }

    char longest_line[MAX_LENGTH] = {'\0'};
    char temp_line[MAX_LENGTH] = {'\0'};
    int current_length = 0;
    int max_length = 0;

    while (fgets(temp_line, MAX_LENGTH - 1, fptr) != NULL)
    {
        current_length = strlen(temp_line);
        if (current_length > max_length)
        {
            max_length = current_length;
            strncpy(longest_line, temp_line, MAX_LENGTH - 1);
        }
    } // while
    printf("The longest length is: %d", max_length);

    return 0;
}

