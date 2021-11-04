#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
    int fd = open("example.txt", O_RDONLY);
    if (fd == -1)
    {
        perror("Error, Open.");
    }

    // the struct stat object, minor diff from C++, which does not require the keyword "struct"
    struct stat buf;
    {

    };

    fstat(fd, &buf);

    printf("File Permissions: %c%c%c%c%c%c%c%c%c \n",
           (((buf.st_mode & S_IRUSR) != 0) ? 'r' : '-'), // user-read
           (((buf.st_mode & S_IWUSR) != 0) ? 'w' : '-'),
           (((buf.st_mode & S_IXUSR) != 0) ? 'x' : '-'),
           (((buf.st_mode & S_IRGRP) != 0) ? 'r' : '-'), // group-read
           (((buf.st_mode & S_IWGRP) != 0) ? 'w' : '-'),
           (((buf.st_mode & S_IXGRP) != 0) ? 'x' : '-'),
           (((buf.st_mode & S_IROTH) != 0) ? 'r' : '-'), // other-write
           (((buf.st_mode & S_IWOTH) != 0) ? 'w' : '-'),
           (((buf.st_mode & S_IXOTH) != 0) ? 'x' : '-'));

    printf("Time of Last Access: %s", ctime(&buf.st_atime));
    printf("Time of Last Modification: %s", ctime(&buf.st_atime));
    printf("Time of Last Status Change: %s", ctime(&buf.st_atime));

    return 0;
} // main (fstat.c)
