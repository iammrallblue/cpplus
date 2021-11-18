#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>

/**
 * @brief head program for viewing first a few lines
 *          of a file
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char *argv[])
{
    // have a file descriptor for opening a file
    int fd;
    int i = 1;
    while (i < argc)
    {

    }
    char* filename = argv[1];
    fd = open(filename, O_RDONLY);
    if (fd == -1)
    {
        perror( "open file error!");
        
        return 0;
    } else
    {
        printf("Successfully opened %s. \n", filename);
    }

    // if(fd != -1)
    // {
    //     printf("Successfully opened %s;\n", filename);
    // }
    // else 
    // {
    //     perror("open file error!");
    // }

    int n = 10;
    char line[100];
    while (fgets(line, sizeof(line), fptr))
    {
        if (n == 0)
        {
            break;
        }
        printf("%s", line);
        n--;
    } // while

    fclose(fptr);
    return 0;
} // main
