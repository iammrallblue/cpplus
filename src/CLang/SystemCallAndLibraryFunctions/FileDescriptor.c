#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int fd;
    char buff[1000];
    char * filename = "test1";

    if ((fd = open(filename, O_RDONLY)) == -1)
    {
        printf("Error, File cannot be opened. \n");
        printf("File descriptor: %d \n ", fd); // return -1, error
        exit(0);
    }
    else
    {
        printf("File opening successfully \n");
        printf("File descriptor is: %d \n", fd); // return 3,  read successfully
    }

    return 0;
} // main

// #include <stdio.h>
// #include <stdlib.h>
// #include <fcntl.h>
// #include <string.h>

// int main(int argc, char const *argv[])
// {
//     int fd;
//     char buff[1000];

//     if ((fd = open("file.txt", O_RDONLY)) == -1)
//     {
//         printf("file opening failed\n");
//         exit(0);
//     }
//     else
//     {
//         printf("file opening successful\n");
//         printf("file descriptor: %d\n", fd);
//     }
// }