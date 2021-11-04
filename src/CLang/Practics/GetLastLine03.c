#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*文件，请改为你本地的文件*/
    const char *filename = "test1";

    const char CR = '\n';              /*假设文件中的换行符是回车符号*/
    const int MAX_CHAR_PER_LINE = 100; /*假设每行最大100个字符*/

    FILE *fp = fopen(filename, "r");
    if (!fp)
    {
        perror("Failed to open file.\n");
        return -1;
    }

    int current_pos = 0;
    char ch;
    long offset = -1;
    char dest[MAX_CHAR_PER_LINE];

    /*初始化dest数组*/
    memset(dest, 0, sizeof(dest));

    /*将文件指针移动到倒数第一个字符*/
    current_pos = fseek(fp, offset, SEEK_END);

    /*从后往前寻找第一个回车符号为止*/
    while ((ch = (char)fgetc(fp)) != CR)
    {
        /*将找到的数字加入dest数组*/
        if (ch >= '0' && ch <= '9')
        {
            char src[2] = {ch, '\0'};
            strcat(dest, src);
        }

        offset += -1;
        current_pos = fseek(fp, offset, SEEK_END);
    }

    fclose(fp);

    /*因为dest中存入的数字是按文件从后往前顺序排列的，所以需要倒置顺序*/
    _strrev(dest);

    /*输出*/
    printf("最后以行的数字是：%s", dest);

    return 0;

} // main