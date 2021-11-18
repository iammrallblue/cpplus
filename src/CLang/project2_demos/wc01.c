#include <stdio.h>
#include <string.h>

/*
    wc program demo

*/
int main(int argc, char *argv[])
{
    FILE *fptr;
    char ch;
    int c = 0;
    int l = 0;
    int w = 0;
    if (argc == 1)
    {
        printf("%s\n", "Invalid Parameters.");
    }
    if (argc > 3)
    {
        printf("%s\n", "Too many Parameters.");
    }
    if (argc == 3)
    {
        fptr = fopen(argv[2], "r"); // ./filename -l file

        if (strcmp(argv[1], "-l") == 0)
        {
            while ((ch = getc(fptr)) != EOF)
            {
                if (ch == '\n')
                {
                     l++;
                }
            } // while
            printf("There are %d lines in the file\n", l);
        }
        else if (strcmp(argv[1], "-w") == 0)
        {
            while ((ch = getc(fptr)) != EOF)
            {
                if (ch == '\n' || ch == ' ')
                {
                }
            } // while
            printf("There are %d words in the file\n", w);
        }
        else if (strcmp(argv[1], "-c") == 0)
        {
            while ((ch = getc(fptr)) != EOF)
            {
                if (ch != '\n' || ch != ' ')
                {
                    c++;
                }
            } // while
            printf("There are %d characters in the file\n", c);
        }
        else
        {
            exit(0);
        }
    }
    fclose(fptr);
    return 0;
} // main