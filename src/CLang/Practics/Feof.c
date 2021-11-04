#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *fptr;
    char ch;

    fptr = fopen("test1", "r");
    if (fptr == NULL)
    {

        perror("Error, File cannot be opened.");
        return (0);
    } // if

    while ((ch = fgetc(fptr)) != EOF)
    {
        if (feof(fptr))
        {
            break;
        } // if

        // printf("%c", ch);
    } // while

    // output outside of whilel loop
    printf("%c", ch);

    fclose(fptr); // clase file
    return 0;
} // main

/*
int main(void)
{
    FILE *p;
    p = fopen("test1", "r");
    getc(p);
    if (feof(p))
    {
        printf("Errors, Open.");
    }
    else
    {
        rewind(p); // jump back the head of file
        int a;
        fscanf(p, "%d", &a);
        printf("%d", a);
    }
    return 0;
}
*/