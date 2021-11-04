#include <stdio.h>

int main(void)
{
    //文件指针
    FILE *fp;

    //文件路径
    char fileName[] = "test1";

    //用来保存读取的数字
    char strNum[100] = {'\0'};

    //用来保存从文件读取的字符
    char ch;

    //文件内部指针 fseek()函数的偏移
    int i = -1;

    //如果文件打开失败
    if ((fp = fopen(fileName, "r")) == NULL)
    {
        printf("error!");
        return -1;
    }

    //移动指针离文件结尾 1 字节处
    fseek(fp, i, SEEK_END);

    //读取一个字符
    ch = fgetc(fp);

    //如果读取的字符不等于换行，如果等于换行说明是最后一行的上一行的换行符
    while (ch != '\n')
    {
        //文件内部指针从文件结尾向前移动
        i--;
        fseek(fp, i, SEEK_END);
        ch = fgetc(fp);
    }

    i = 0;
    ch = fgetc(fp);

    //如果未到文件结尾
    while (!feof(fp))
    {
        //如果读取的字符是数字的话
        if (ch >= '0' && ch <= '9')
        {
            //把读取的数字保存字符数组中
            strNum[i] = ch;
            i++;
        }
        ch = fgetc(fp);
    }

    //关闭文件
    fclose(fp);

    //输出从最后一行中读取的数字
    printf("%s\n", strNum);

    return 0;
} // main

