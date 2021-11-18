#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>


int main(int argc, char *argv[])
{
    // have a file desciptor to read a file
    int fd;

    char * filename = "lgb";

    // open a file to buffer??
    fd = open(filename, O_RDONLY);
    if(fd == -1)
    {
        perror("open failed.");
    }
    else
    {
        printf("Successfully opened %s. \n", filename);
    }

    // lseek(fd, SEEK_SET, 0); // set cursor to the beginning of the loaded file
    off_t size = lseek(fd, 0, SEEK_END);

    char buff[3000] = {0};
    read(filename, buff, size);
    printf("%s\n",buff);
    return 0;
} // main


