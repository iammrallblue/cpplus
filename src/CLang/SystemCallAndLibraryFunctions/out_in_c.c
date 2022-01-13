// do comment if any problem arises

// code

#include <stdio.h>

#include <string.h>

int main()

{

    // prompt user for input file

    printf("Enter name of file: ");

    char outfile[100];

    scanf("%s", &outfile);

    // open input file

    FILE *input = fopen(outfile, "r");

    // if file can be opened

    if (input != NULL)

    {

        printf("Error! Existing file found.");

        // close file

        fclose(input);

        return -1;
    }

    // create file and open in write mode

    FILE *output = fopen(outfile, "w");

    // write numbers from 1 to 100 one per line

    for (int i = 1; i <= 100; i++)

        fprintf(output, "%d\n", i);

    return 0;
}