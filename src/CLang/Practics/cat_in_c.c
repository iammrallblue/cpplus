#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#define READSIZE 4096

int main(int ac, char *av[])
{
    int rfd = -1, rlen = -1, ret = -1; //被文件描述符、读取内容长度、程序返回值
    char rbuf[READSIZE];               //读取内容缓冲
    memset(rbuf, 0, READSIZE);
    if (ac == 2)
    {
        if ((rfd = open(av[1], O_RDONLY)) == -1)
        {
            perror("ccat:");
            return -1;
        }
        while ((rlen = read(rfd, rbuf, READSIZE)) > 0)
        {
            printf("%s", rbuf);
            memset(rbuf, 0, READSIZE);
        }
        ret = close(rfd);
        if (ret == -1)
            perror("ccat:");
    }
    return ret;
} // main