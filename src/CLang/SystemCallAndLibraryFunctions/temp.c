#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>


#define MAX_BUF_SIZE 512

// int main ()
// {
//     int i,n;
//     int * pData;
//     printf ("要输入的数字的数目：");
//     scanf ("%d",&i);
//     pData = (int*) calloc (i,sizeof(int));
//     if (pData==NULL) exit (1);
//     for (n=0;n<i;n++)
//     {
//         printf ("请输入数字 #%d：",n+1);
//         scanf ("%d",&pData[n]);
//     }
//     printf ("你输入的数字为：");
//     for (n=0;n<i;n++) printf ("%d ",pData[n]);

//     free (pData);
//     system("pause");
//     return 0;
// }

int main()
{
    FILE *fp;
    int ch;

    fp = fopen("file.txt", "w");
    for (ch = 33; ch <= 100; ch++)
    {
        putc(ch, fp);
    }

    fclose(fp);

    return (0);

} // main

int main()
{
    FILE *fp;
    int c;

    fp = fopen("file.txt", "r");
    while (1)
    {
        c = fgetc(fp);
        if (feof(fp))
        {
            break;
        }
        printf("%c", c);

    } // while
    fclose(fp);

    return (0);

} // main

int main(int argc, char **argv)
{
    int fd;
    int count, value;
    char buf[MAX_BUF_SIZE];

    if (argc < 2)
    {
        fprintf(stderr, "Usage: a.out filename\n");
    }
    else
    {
        fd = open(argv[1], O_RDONLY);
        if (fd < 0)
        {
            fprintf(stderr, "Error In Opening File\n");
        }
        else
        {
            fprintf(stdout, "Enter No of bytes to read from file %s\n", argv[1]);
            fscanf(stdin, "%d", &value);
            printf("value %d\n", value);

            count = read(fd, buf, value);
            buf[count] = '\0';

            if (count <= 0)
            {
                fprintf(stderr, "Error In Reading from file\n");
            }
            else if (count < value)
            {
                fprintf(stdout, "Partial read data is %s\n", buf);
            }
            else if (count == value)
            {
                fprintf(stdout, "Data is: \n%s\n", buf);
            }
            else
            {
                fprintf(stderr, "Error in read.");
            }

            close(fd);
        }
    }
    return 0;

} // main

/*
System Calls for Low-Level File I/O
 open()


int open(const char *path, int flags, mode_t mode);
Used to open a file for reading, writing, appending, etc.

Returns a file descriptor (small positive integer). Returns -1 on error.

path: Path to file to open.

flags: What is to be done by the open. Multiple flags are specified by bit or'ing (|):

O_RDONLY --- Open for reading only.
O_WRONLY --- Open for writing only.
O_CREAT --- Create file if it does not exist.
O_TRUNC --- Truncate size to 0.
...
mode: Permissions with which to create a file. Used only when creating a file on an open for write. Multiple modes are specified by bit or'ing:

S_IRUSR --- Read for owner.
S_IWUSR --- Write for owner.
S_IRGRP --- Read for group.
S_IROTH --- Read for other.
...
Typical read call:

int rfd;

if ((rfd = open(argv[1], O_RDONLY, 0)) < 0)
    pdie("Open failed");
Typical write call :

    int wfd;

if ((wfd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
                S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)) < 0)
    pdie("Open failed");
Sample Program
*/
/**********************************************************************
 * fileio.c
 * Tom Kelliher
 *
 * This program demonstrates how to do low-level file I/O in C.  This
 * program implements a simple version of Unix's cp command.  Two
 * filename are expected on the command line.  The first file is the
 * name of the file to be copied, the second is the file to be created.
 **********************************************************************/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* Prototypes. */
void pdie(const char *);
void die(const char *);

#define BUFFER_SIZE 1024 /* Size of the read/write buffer. */

/**********************************************************************
 * main
 **********************************************************************/

int main(int argc, char *argv[])
{
    int rfd;                  /* Read file descriptor. */
    int wfd;                  /* Write file descriptor. */
    char buffer[BUFFER_SIZE]; /* Read/Write buffer. */
    char *bp;                 /* Pointer into write buffer. */
    int bufferChars;          /* Number of bytes remaining to be written. */
    int writtenChars;         /* Number of bytes written on last write. */

    if (argc != 3)
    {
        printf("Two filenames expected.\n");
        exit(1);
    }

    /* Open file to be copied. */
    if ((rfd = open(argv[1], O_RDONLY, 0)) < 0)
    {
        pdie("Open failed");
    }

    /* Open file to be created. */
    if ((wfd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
                    S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)) < 0)
    {
        pdie("Open failed");
    }

    while (1)
    {
        /* Normal case --- some number of bytes read. */
        if ((bufferChars = read(rfd, buffer, BUFFER_SIZE)) > 0)
        {
            bp = buffer; /* Pointer to next byte to write. */

            /*
               Since we can't guarantee that all the bytes will be written
               in a single write(), this code must be written such that
               several write()'s can possibly be called.
            */
            while (bufferChars > 0)
            {
                if ((writtenChars = write(wfd, bp, bufferChars)) < 0)
                    pdie("Write failed");

                bufferChars -= writtenChars; /* Update. */
                bp += writtenChars;

            } // while
        }
        else if (bufferChars == 0) /* EOF reached. */
        {
            break;
        }
        else /* bufferChars < 0 --- read failure. */
        {
            pdie("Read failed");
        }

    } // while

    close(rfd);
    close(wfd);

    return 0;

} // main

/**********************************************************************
 * pdie --- Print error message, call perror, and die.
 **********************************************************************/

void pdie(const char *mesg)
{

    perror(mesg);
    exit(1);

} // pdie

/**********************************************************************
 * die --- Print error message and die.
 **********************************************************************/

void die(const char *mesg)
{

    fputs(mesg, stderr);
    fputc('\n', stderr);
    exit(1);

} // die

// Program to illustrate the getopt()
// function in C

#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int opt;

    // put ':' in the starting of the
    // string so that program can
    // distinguish between '?' and ':'
    while ((opt = getopt(argc, argv, ": if : lrx")) != -1)
    {
        switch (opt)
        {
        case 'i':
        case 'l':
        case 'r':
            printf("option: %c\n", opt);
            break;
        case 'f':
            printf("filename: %s\n", optarg);
            break;
        case ':':
            printf("option needs a value\n");
            break;
        case '?':
            printf("unknown option: %c\n", optopt);
            break;

        } // switch
    }     // while

    // optind is for the extra arguments
    // which are not parsed
    for (; optind < argc; optind++)
    {
        printf("extra arguments: %s\n", argv[optind]);
    }

    return 0;

} // main

// c program to demonstrate
// example of strlen() function.

int main()
{
    char ch[] = {'g', 'e', 'e', 'k', 's', '\0'};

    printf("Length of string is: %d", strlen(ch));

    return 0;
}
// Output :

// Length of string is: 5
// Example 2:-

// c program to demonstrate
// example of strlen() function.

int main()
{
    char str[] = "geeks";

    printf("Length of string is: %d", strlen(str));

    return 0;
}

// Output:
// Length of string is: 5
// Example 3:-

// c program to demonstrate
// example of strlen() function.

int main()
{
    char *str = "geeks";

    printf("Length of string is: %d", strlen(str));

    return 0;
}

#include <stdio.h>

// chdir function is declared
// inside this header
#include <unistd.h>
int main()
{
    char s[100];

    // printing current working directory
    printf("%s\n", getcwd(s, 100));

    // using the command
    chdir("..");

    // printing current working directory
    printf("%s\n", getcwd(s, 100));

    // after chdir is executed
    return 0;
}

// Main Method
int main()
{

    // changing the current
    // working directory(cwd)
    // to /usr
    if (chdir("/usr") != 0)
        perror("chdir() to /usr failed");

    // changing the cwd to /tmp
    if (chdir("/tmp") != 0)
        perror("chdir() to /temp failed");

    // there is no /error
    // directory in my pc
    if (chdir("/error") != 0)

        // so chdir will return -1
        perror("chdir() to /error failed");

    return 0;
}

int main()
{
    FILE *fp;

    fp = fopen("file.txt", "r");
    if (fp == NULL)
    {
        printf("Error: %s\n", strerror(errno));
    }

    return (0);
}


int main()
{
    int fd = 0;
    fd = open("./file.txt", O_RDWR | O_CREAT);
    if (-1 == fd)
    {
        printf("open fail\n"); //文件打开失败
        exit(-1);
    }
    else
    {
        printf("open ok\n"); //文件打开成功
    }

    char buf[] = "hello world";
    int ret = write(fd, (void *)buf, strlen(buf));

    if (-1 == ret) //文件写入失败
    {
        printf("write fail\n");
        perror("write fail\n");
    }
    else
    {
        printf("write size : %d\n", strlen(buf));
    }

    lseek(fd, SEEK_SET, 0); //将文件光标移动到文件起始位置

    char buf1[30] = {0};
    ret = read(fd, buf1, sizeof(buf1)); //从文件读取数据
    if (-1 == ret)                      //文件读取失败
    {
        printf("read fail\n");
    }
    printf("%s\n", buf1); //打印从文件读取到的数据
    close(fd);            //关闭文件
    return 0;
}


/*
*  fork_test.c
*  version 1
*  Created on: 2010-5-29
*      Author: wangth
*/
 
#include <unistd.h>
#include <stdio.h>
 
int main ()
{
    pid_t fpid; //fpid表示fork函数返回的值
    int count = 0;
    fpid = fork();
    if (fpid < 0)
        printf("error in fork!");
    else if (fpid == 0)
    {
        printf("i am the child process, my process id is %d/n", getpid());
        printf("我是爹的儿子/n");//对某些人来说中文看着更直白。
        count++;
    }
    else
    {
        printf("i am the parent process, my process id is %d/n", getpid());
        printf("我是孩子他爹/n");
        count++;
    }
    printf("统计结果是: %d/n", count);
    return 0;
