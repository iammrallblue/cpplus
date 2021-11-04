#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char const *argv[])
{
    if (argc > 1)
    {
        int fd = open(argv[1], O_RDONLY);
        if (fd == -1)
        {
            perror("open");
        }

        if (dup2(fd, STDIN_FILENO) == -1)
        {
            perror("dup2");
        }

        int i;
        printf("Please enter an integer: \n");
        scanf("%d", &i);
        getchar(); //
        printf("You input: %d\n", i);

        printf("Please enter a character: \n");
        char c = getchar();
        printf("you input: %c\n", c);

        if (cloase(fd) == -1)
        {
            perror("close");
        }
    }
    else
    {
        fprintf(stderr, "Please specify a filename as the commandline argument. \n");
    } // if
    return 0;

} // main (dup_in.c)