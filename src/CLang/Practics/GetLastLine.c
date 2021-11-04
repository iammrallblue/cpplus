#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char get_ch;

    fp = fopen("test1", "r");
    fputs("This is tutorialspoint.com", fp);

    int temp = fseek(fp, -1, SEEK_SET);
    fputs(" C Programming Language", fp);
    fclose(fp);

    while ((get_ch = fgetc(fp)) != EOF)
    {
        if (feof(fp))
        {
            break;
        }
        printf("%c", get_ch);
    } // while

    fclose(fp);
    printf("%d", temp);

    return (0);
} // main
