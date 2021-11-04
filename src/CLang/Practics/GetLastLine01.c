#include <stdio.h>

int main()
{
    FILE *f1;
    int n, total;
    char a;
    printf("\n Enter a number from which the Characters to be displayed : \n");
    scanf("%d", &n);
    f1 = fopen("test1", "r");
    if (f1 == NULL)
    {
        puts("The file has no Information !!");
    }
    else
    {
        fseek(f1, 0, SEEK_END);
        total = ftell(f1);
        fseek(f1, (total - n), SEEK_SET);
        while (a != EOF)
        {
            a = fgetc(f1);
            putchar(a);
        }
    }
    fclose(f1);

    return (0);
}