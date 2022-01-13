#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/time.h>

#define READSIZE 16384 //一次性读取文件的大小

void showtime(char *, struct timeval); //打印时间
long filesize(char *);                 //取文件大小(bytes)
int main(int ac, char *av[])
{
    int rfd = -1, rlen = -1, ret = -1, i = 1; //文件描述符、读取内容长度、程序返回值
    int nfblocks;                             //文件分割块数
    char rbuf[READSIZE];                      //读取内容缓冲
    struct timeval times[2];                  // open和close时间
    long int fsize;                           //文件大小
    float sub;                                //时间差
    memset(rbuf, 0, READSIZE);
    if (ac == 2)
    {
        if ((fsize = filesize(av[1])) == 0)
        {
            printf("file size unknown\n");
            return ret;
        }
        //计算文件分割数（读取次数）
        nfblocks = fsize / READSIZE;
        if (fsize % READSIZE > 0)
            nfblocks++;
        if ((rfd = open(av[1], O_RDONLY)) == -1)
        {
            perror("ccat:");
            return -1;
        }
        gettimeofday(&times[0], NULL); // open时间
        while ((rlen = read(rfd, rbuf, READSIZE)) > 0)
        {
            printf("%s", rbuf);
            memset(rbuf, 0, READSIZE);
            i++;
        }
        ret = close(rfd); // close时间
        gettimeofday(&times[1], NULL);
        if (ret == -1)
            perror("ccat:");
        //计算时间差
        sub = (times[1].tv_sec - times[0].tv_sec) + (times[1].tv_usec - times[0].tv_usec) / 1000000.0;
        printf(">>>file size:%ld,read size:%d,blocks num:%d\n", fsize, READSIZE, nfblocks);
        printf(">>>open at:%ld(s):%ld(us)\n", (long)times[0].tv_sec, (long)times[0].tv_usec);
        printf(">>>close at:%ld(s):%ld(us)\n", (long)times[1].tv_sec, (long)times[1].tv_usec);
        printf(">>>sub=%f(s)\n", sub);
    }
    return ret;
}

long filesize(char *filename)
{
    struct stat pstat;
    if (stat(filename, &pstat) < 0)
        return 0;
    return (long)pstat.st_size;
}