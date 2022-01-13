#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <getopt.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <errno.h>

#define READSIZE 4096

int locate(int fd, int nline, char *rbuf);     //计算要打印的行距文件尾的偏移量（fd:文件描述符，nline:打印行数，rbuf:内容缓冲）
int printd(int fd, off_t offs2end, char *buf); //打印内容（fd:文件描述符，offset:距文件尾的偏移量，buf:内容缓冲）
void printerr(int);                            //打印错误信息

int main(int argc, char *argv[])
{
    int rfd = -1,        //文件描述付
        ret = -1,        //主程序返回值
        nline = 10;      //读取文件行数（默认10）
    char rbuf[READSIZE]; //读取缓冲区
    char c;

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
    //打开文件
    if ((rfd = open(argv[optind], O_RDONLY)) == -1)
    {
        fprintf(stderr, "%s:", argv[0]);
        return -1;
    }

    //  if(pstat.st_size < READSIZE)
    printd(rfd, (off_t)(0 - locate(rfd, nline, rbuf)), rbuf);
    //关闭文件，并返回
    ret = close(rfd);
    if (ret == -1)
        fprintf(stderr, "%s:\n", argv[0]);
    return ret;
}
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
            //累计距文件尾的偏移量
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

int printd(int fd, off_t offs2end, char *buf)
{
    int len = 0;
    if (lseek(fd, offs2end, SEEK_END) == -1)
        return -1;
    memset(buf, 0, READSIZE);
    while ((len = read(fd, buf, READSIZE)) > 0)
    {
        printf("%s", buf);
        memset(buf, 0, READSIZE);
    }
}

void printerr(int err)
{
    if (err == EBADF)
        printf("fd is not an open file descriptor.\n");
    else if (err == EINVAL)
        printf("whence  is  not  one  of  SEEK_SET,  SEEK_CUR,  SEEK_END; or the\
   resulting file offset would be negative, or beyond the end of a  seekable device.\n");
    else if (err == EOVERFLOW)
        printf(" The resulting file offset cannot be represented in an off_t.\n");
    else if (err == ESPIPE)
        printf("fd is associated with a pipe, socket, or FIFO.\n");
}