#include <stdio.h>

void main(int argc, char *argv[])
{
    // Ensure that there is something given as argument
    if (argc < 2)
        return;

    // Open file
    FILE *fp;

    // file name should be given as first argument
    fp = fopen(argv[1], "r");

    // Read each character and print; stop when end of file or '\n' is detected
    char c;
    while ((c = fgetc(fp)) != EOF)
    {
        printf("%c", c);
        if (c == '\n')
            break;
    }

    return;
}
// lastline.c

#include <stdio.h>

void main(int argc, char *argv[])
{
    // Ensure that there is something given as argument
    if (argc < 2)
        return;

    // Open file
    FILE *fp;
    fp = fopen(argv[1], "r");

    // Create a buffer for lines, assuming that lines aren't larger than 1000 characters
    char buff[1000];

    // Keep reading lines until end of file
    while (fgets(buff, 1000, fp) != NULL)
        ;

    // Print final line, which should be stored in buff
    printf("%s", buff);

    return;
}
// longestline.c

#include <stdio.h>
#include <string.h>

void main(int argc, char *argv[])
{
    // Ensure that there is something given as argument
    if (argc < 2)
        return;

    // Open file
    FILE *fp;
    fp = fopen(argv[1], "r");

    // Create a buffer for lines, assuming that lines aren't larger than 1000 characters
    char buff[1000];

    // Read lines and maintain max length
    int maxlen = 0;
    while (fgets(buff, 1000, fp) != NULL)
    {
        int len = strlen(buff);

        // In case this line has a newline at the end, we disregard it
        if (buff[len - 1] == '\n')
            len--;

        // Update maximum length
        if (len > maxlen)
            maxlen = len;
    }

    // Print maximum line length
    printf("%d\n", maxlen);

    return 0;
}

int main(int argc, char const *argv[])

{

    int n;

    printf("INPUT:\n");

    printf("Enter the number of lines: ");

    scanf("%d", &n);

    char s[50][50];

    // user input

    for (int i = 0; i <= n; i++)
    {

        fgets(s[i], 50, stdin);
    }

    printf("OUTPUT:\n");

    // iterate until a \n is found

    for (int i = 0; s[n][i] != '\n'; i++)
    {

        printf("%c", s[n][i]);
    }

    printf("\\n\n");

    return 0;
}

void main(int argc, char *argv[])
{
    // Ensure that there is something given as argument
    if (argc < 2)
        return;

    // Open file
    FILE *fp;

    // file name should be given as first argument
    fp = fopen(argv[1], "r");

    // Read each character and print; stop when end of file or '\n' is detected
    char c;
    while ((c = fgetc(fp)) != EOF)
    {
        printf("%c", c);
        if (c == '\n')
            break;
    }

    return;
}
// lastline.c

#include <stdio.h>

void main(int argc, char *argv[])
{
    // Ensure that there is something given as argument
    if (argc < 2)
        return;

    // Open file
    FILE *fp;
    fp = fopen(argv[1], "r");

    // Create a buffer for lines, assuming that lines aren't larger than 1000 characters
    char buff[1000];

    // Keep reading lines until end of file
    while (fgets(buff, 1000, fp) != NULL)
        ;

    // Print final line, which should be stored in buff
    printf("%s", buff);

    return;
}

// longestline.c

void main(int argc, char *argv[])
{
    // Ensure that there is something given as argument
    if (argc < 2)
        return;

    // Open file
    FILE *fp;
    fp = fopen(argv[1], "r");

    // Create a buffer for lines, assuming that lines aren't larger than 1000 characters
    char buff[1000];

    // Read lines and maintain max length
    int maxlen = 0;
    while (fgets(buff, 1000, fp) != NULL)
    {
        int len = strlen(buff);

        // In case this line has a newline at the end, we disregard it
        if (buff[len - 1] == '\n')
            len--;

        // Update maximum length
        if (len > maxlen)
            maxlen = len;
    }

    // Print maximum line length
    printf("%d\n", maxlen);

    return;
}

int main()
{
    FILE *file = fopen("file.txt", "r");
    FILE *file1 = fopen("file1.txt", "w");
    char ch;

    /* open the file for reading */
    // fptr = fopen(file, "r");
    if (file == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }
    ch = fgetc(file);
    while (ch != EOF)
    {
        printf("%c", ch);

        if (ch == '\n')
            break;
        ch = fgetc(file);
    }
    fprintf(file1, "%s", ch);
    fclose(file);
    fclose(file1);
    return 0;
}