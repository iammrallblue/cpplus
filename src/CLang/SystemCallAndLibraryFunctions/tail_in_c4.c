#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <getopt.h>
#include <unistd.h>
#include <fcntl.h>

#define READSIZE 16384 //一次性读取文件的大小

int locate(int fd, int nline, char *rbuf)
{
    off_t offs_seek;
    int len = 0,
        l = 1,
        i = 0,
        nent = 0,     //换行计数器
        offs2end = 0, //距文件结尾的偏移量
        off = 0,
        whence = SEEK_END;

    char *pb;          //指向行换行指针
    struct stat pstat; //文件状态
    if (fstat(fd, &pstat) < 0)
    {
        perror("ttail");
        return -1;
    }
    //处理缓冲区大小大于文件大小的
    if (pstat.st_size <= READSIZE)
    {
        off = 0;
        whence = SEEK_CUR;
    }
    else
    {
        off = 0 - READSIZE;
        whence = SEEK_END;
    }

    while ((offs_seek = lseek(fd, l * off, whence)) != -1)
    {
        l++;
        if ((len = read(fd, rbuf, READSIZE)) > 0)
        {
            for (i = len - 1; i >= 0; i--)
            {
                if (rbuf[i] == '\n')
                {
                    pb = &rbuf[i];
                    if (++nent == nline + 1)
                        break;
                }
            }
            9 //累计距文件尾的偏移量
                if (nent != nline + 1)
            {
                offs2end += len;
            }
            else
            {
                offs2end += (&rbuf[len - 1] - pb);
                break;
            }
            memset(rbuf, 0, READSIZE);
        }
    }
    if (offs_seek == -1)
        printerr(errno);
    return offs2end;
}

int main(int argc, char *argv[])
{
    /* code */
    return 0;
} // main
