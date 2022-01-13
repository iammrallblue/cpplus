#include <stdio.h>
#include <string.h>
#include <getopt.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define READSIZE 4096 //读取文件内容长度

int main(int argc, char *argv[])
{
    int rfd = -1, //文件描述符
        rlen = 0, //每次read文件的内容长度
        i,
        nline = 10, //读取文件的行数（默认10）
        nent = 0,   //'\n'计数器
        ret;
    char rbuf[READSIZE], //读取文件缓冲区
        c;
    char *pb = 0;   //指向文件每行换行
    char *filename; //文件名
    memset(rbuf, 0, READSIZE);
    //程序参数解析
    while ((c = getopt(argc, argv, "n:")) != -1)
    {
        switch (c)
        {
        case 'n': //指定显示行数
            nline = atoi(optarg);
            break;
        default:
            fprintf(stderr, "Usage: %s [-n lines]", argv[0]);
            return -1;
        }
    }
    filename = argv[optind];
    if ((rfd = open(filename, O_RDONLY)) == -1)
    {
        fprintf(stderr, "%s:", argv[0]);
        return -1;
    }

    while ((rlen = read(rfd, rbuf, READSIZE)) > 0)
    {
        for (i = 0; i < rlen; i++)
        {
            if (rbuf[i] == '\n')
            {
                pb = &rbuf[i];
                if (++nent == nline)
                    break;
            }
        }
        if (nent == nline)
        {
            printf("%.*s", pb - &rbuf[0] + 1, rbuf);
            break;
        }
        else if (i == rlen)
            printf("%s", rbuf);
        memset(rbuf, 0, READSIZE);
    }
    ret = close(rfd);
    if (ret == -1)
        fprintf(stderr, "%s:", argv[0]);
    return ret;
}