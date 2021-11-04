#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <fcntl.h>

// function permission
void printPermissions(struct stat *buf)
{
    // the struct stat object, minor diff from C++, which does not require the keyword "struct"
    // struct stat buf

    printf("File Permissions: %c%c%c%c%c%c%c%c%c \n",
           (((buf->st_mode & S_IRUSR) != 0) ? 'r' : '-'), // user-read
           (((buf->st_mode & S_IWUSR) != 0) ? 'w' : '-'),
           (((buf->st_mode & S_IXUSR) != 0) ? 'x' : '-'),
           (((buf->st_mode & S_IRGRP) != 0) ? 'r' : '-'), // group-read
           (((buf->st_mode & S_IWGRP) != 0) ? 'w' : '-'),
           (((buf->st_mode & S_IXGRP) != 0) ? 'x' : '-'),
           (((buf->st_mode & S_IROTH) != 0) ? 'r' : '-'), // other-write
           (((buf->st_mode & S_IWOTH) != 0) ? 'w' : '-'),
           (((buf->st_mode & S_IXOTH) != 0) ? 'x' : '-'));

} // printPermissions

int main(int argc, char *argv[])
{
    char *filename = "example.txt";
    int fd = creat(filename, 0444);
    if (fd == -1)
    {
        perror("Open");
    }

    struct stat buf;

    fstat(fd, &buf);

    printPermissions(&buf);

    chmod(filename, S_IRWXU);
    fstat(fd, &buf);
    printPermissions(&buf);

    fchmod(fd, S_IRUSR | S_IWGRP | S_IXOTH);
    fstat(fd, &buf);

    fchmod(fd, 0777);
    fstat(fd, &buf);
    printPermissions(&buf);

    return 0;
} // main (chmod.c)