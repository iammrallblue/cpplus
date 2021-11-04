#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{

    FILE *fp = fopen("test1", "r");
    char line[1024] = "";
    char c;
    int len = 0;
    if (fp == NULL)
        exit(EXIT_FAILURE);
    fseek(fp, -1, SEEK_END); // next to last char, last is EOF
    c = fgetc(fp);
    while (c == '\n') // define macro EOL
    {
        fseek(fp, -2, SEEK_CUR);
        c = fgetc(fp);
    }
    while (c != '\n')
    {
        fseek(fp, -2, SEEK_CUR);
        ++len;
        c = fgetc(fp);
    }
    fseek(fp, 1, SEEK_CUR);
    if (fgets(line, len, fp) != NULL)
        puts(line);
    else
        printf("Error\n");
    fclose(fp);
    return 0;
} // main
