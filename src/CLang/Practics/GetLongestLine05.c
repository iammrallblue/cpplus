#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000

int main()
{
    char str[MAX];
    int len;
    int max = 0;
    char *ptemp;
    char *ppos;
    FILE *fp;
    fp = fopen("test1", "r");

    if (fp == NULL)
    {
        printf("Open the file failure\n");
        return EXIT_FAILURE;
    }
    
    while ((ptemp = fgets(str, MAX, fp)) != NULL)
    {
        len = strlen(ptemp);
        if (len > max)
            ;
        {
            max = len;
            strcpy(ppos, ptemp);
        }
    }
    printf("最长行是:%s\n", ppos);
    system("pause");
    return EXIT_SUCCESS;
}