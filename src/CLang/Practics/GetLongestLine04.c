
#include <stdio.h>
#include <string.h>

int read_line(FILE *fp, char *dst)
{
    int i = 0;
    int c;
    while ((c = fgetc(fp)) != '\n' && c != EOF)
        dst[i++] = c;
    dst[i] = 0;
    return i;
}
int main()
{
    char max[1024], input[1024];
    int max_len = 0, len;
    char file_name[100];
    FILE *fp;

    printf("input your file name\n");
    scanf("%s", file_name);
    fp = fopen(file_name, "r");
    if (fp == NULL)
    {
        printf("open file %s error\n", file_name);
        return -1;
    }
    while (1)
    {
        len = read_line(fp, input);
        if (max_len < len)
        {
            max_len = len;
            strcpy(max, input);
        }
        if (feof(fp))
            break;
    }
    fclose(fp);
    printf("max length = %d\n", max_len);
    printf("content: %s\n", max);
    return 0;
}

