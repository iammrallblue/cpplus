#include <stdio.h>

// the boolean values can be defined as marco
#define TRUE 1
#define FALSE 0

int main(int argc, char *argv[])
{

    // iterating parameters in main function
    for (int i = 0; i < argc; i++)
    {
        printf("i = %d, argv[%d] = %s \n", i, i, argv[i]); // i = 0,
        // argv[0] = /Users/junoh/Workspace/cpplus/src/CLang/
        //  SystemCallAndLibraryFunctions/C_Examples/io
    } // for

    printf("I miss you Bella.\n");

    // define a few variables
    char c = '#';
    int x = 5;
    double y = 2.789;
    printf("char c= %c, int x= %d, double y= %.2f\n", c, x, y); // output values.
    // .2 to keep double

    int i;
    printf("Input an integer: ");
    scanf("%d", &i); // &i and i, if input i as an argument
    // warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    printf("%d is entered. \n", i);
    getchar(); // getchar function can keeping next line function running normally.

    // input and output a string
    char str[50];
    printf("Enter a string: ");
    // "^\n" means to keep reading until the newline char is encountered.
    // but does not reading in the \n
    scanf("%[^\n]s", str);
    printf("%s is entered.\n", str);
    getchar();

    printf("Starting getchar putchar() section\n");
    printf("Please enter any number of chars:\n");

    while ((c = getchar()) != EOF)
    {
        putchar(c); // output
    }               // while

    while (TRUE)
    {
        printf("Inside of the while(true) loop. \n");
        break;
    } // while

    return 0;
} // main
