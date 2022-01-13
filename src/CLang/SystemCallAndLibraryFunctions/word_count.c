#include <stdio.h>

#include <stdlib.h>

void count(int *chars, int *words, char *str);

int main(int argc, char *argv[])

{

    // To keep track the number of bytes, number of words and

    // number of lines

    int noChars = 0, noWords = 0, noLines = 0;

    // Take the file name as the command line argument

    const char *filename = argv[1];

    FILE *fp = fopen(filename, "r");

    // Check wether the file is opened or not

    if (fp == NULL)

    {

        perror("Error opening file");

        return (-1);
    }

    // Create an array of 201 characters to hold the input line.

    char *str = malloc(sizeof(char) * 201);

    // Read the file line by line in main

    while (fgets(str, 201, fp) != NULL)

    {

        // pass each line to the function count

        // Also pass word and character counts by reference to the function count.

        count(&noChars, &noWords, str);

        // keep track the number of lines

        noLines++;
    }

    // Finally print the output

    printf("%d %d %d %s\n", noLines, noWords, noChars, filename);

    return 0;
}

// Takes the a string as parameter and counts the number of characters

// and number of words exist in that string

void count(int *chars, int *words, char *str)

{

    int i = 0;

    // To keep track that whether the previous character is a space or not

    int prevSpace = 0;

    // Read charcter by character

    // until null character is encounter

    while (str[i] != '\0')

    {

        // Count each character

        *chars = *chars + 1;

        // if the character is a space or tab,

        // increment the word count

        if (str[i] == ' ' || str[i] == '\t')

        {

            if (prevSpace != 1)

            {

                *words = *words + 1;
            }
        }

        // Keep track whether the previous character is a space or not

        if (str[i] == ' ' || str[i] == '\t')

            prevSpace = 1;

        else

            prevSpace = 0;

        i++;

        // if the line ends, increment the word count.

        if (str[i] == '\n' && prevSpace != 1)

            *words = *words + 1;
    }
}