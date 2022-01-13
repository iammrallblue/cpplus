#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

// function
void func(char arr[], int n)
{
    // open the file for Read only
    int f_write = open("lgb", O_RDONLY);

    // open the file for Write and Read only
    int f_read = open("lgb", O_WRONLY);

    int count = 0;
    while (read(f_write, arr, 1))
    {
        // to write the 1st byte of the input file in
        // the output file
        if (count < n)
        {
            // SEEK_CUR specifies that
            // the offset provided is relative to the current file position
            lseek(f_write, n, SEEK_CUR);
            write(f_read, arr, 1);
            count = n;
        }
        // afte the nth byte (now taking the alternate nth byte)
        else
        {
            count = (2 * n);
            lseek(f_write, count, SEEK_CUR);
            write(f_read, arr, 1);
        }
    } // while

    close(f_write);
    close(f_read);

} // func
int main(int argc, char *argv[])
{
    // have a file desciptor to read a file
    int fd;

    char *filename = "lgb";

    // open a file to buffer??
    fd = open(filename, O_RDONLY);
    if (fd == -1)
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
    printf("%s\n", buff);

    // call func function
    char arr[1000];
    int n;
    n = 5;

    func(arr, n);

    return 0;
} // main
