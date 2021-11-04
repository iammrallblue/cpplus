#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    FILE *fp; 
    char str[60]; // c-string

    // opening file for reading
    fp = fopen("tmp.txt", "r");
    if(fp == NULL)
    {
        perror("Error opening file");
        return(-1);
    } // if
    if(fgets(str,60, fp)!=NULL)
    {
        // writing content to stdout
        puts(str);
    }
    fclose(fp);

    return 0;
} // main



/*
#include <stdio.h>
#include <stdlib.h> // For exit() function
int main() {
    char c[1000];
    FILE *fptr;
    if ((fptr = fopen("program.txt", "r")) == NULL) {
        printf("Error! File cannot be opened.");
        // Program exits if the file pointer returns NULL.
        exit(1);
    }

    // reads text until newline is encountered
    fscanf(fptr, "%[^\n]", c);
    printf("Data from the file:\n%s", c);
    fclose(fptr);

    return 0;
}

*/