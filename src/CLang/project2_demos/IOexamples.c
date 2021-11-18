#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

#define MAXREAD 5000

/**
 * @brief program the head command imitation
 * 
 * @param -c the first n character(s) of reading
 * @param -n the first n line(s) of reading
 * 
 */
int main(int argc, char *argv[])
{
    // have a file descriptor
    int fd;

    fd = open("lgb", O_RDONLY); // open the lgb file in read-only mode

    // determine if open file failed
    if (-1 == fd)
    {
        perror("open fialed.");

        exit(0);
    }
    else
    {
        printf("file is opened.");
    }

    // create a buufer to store the read content
    char buff[MAXREAD] = {0}; // initial buffer to 0

    read(fd, buff, sizeof(buff)); // read from file to buffer, size is the size of buffer
    
    printf("The data in buffer is: %s \n", buff);
    
    return 0;
} // main
