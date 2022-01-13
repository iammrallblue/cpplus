// do comment if any problem arises

// code

#include <stdio.h>

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

    char line[1000];

    // print first 3 lines

    for (int i = 0; i < 3; i++)

    {

        // read a line from file

        fgets(line, 1000, input);

        printf("%s", line);
    }

    // close input file

    fclose(input);

    return 0;
}