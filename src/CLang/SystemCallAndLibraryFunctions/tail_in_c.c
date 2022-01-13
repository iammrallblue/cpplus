// do comment if any problem arises
// code

#include <stdio.h>

#include <string.h>

int main()
{

    // prompt user for input file

    printf("Enter name of file: ");

    char infile[100];

    scanf("%s", &infile);

    // open input file

    FILE *input = fopen(infile, "r");

    // if file can't be opened

    if (input == NULL)

    {

        printf("Error! Can't open input file.");

        return -1;
    }

    char line1[1000] = "";

    char line2[1000] = "";

    char line3[1000] = "";

    char line[1000];

    // read file till end of file and get last 3 lines

    while (fgets(line, 1000, input))

    {

        // set line 2 to line 1

        strcpy(line1, line2);

        // set line 3 to line 2

        strcpy(line2, line3);

        // set line to line 3

        strcpy(line3, line);
    }

    // print last 3 lines

    printf("%s", line1);

    printf("%s", line2);

    printf("%s", line3);

    // close input file

    fclose(input);

    return 0;
}