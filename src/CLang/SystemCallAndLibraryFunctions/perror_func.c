#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(int argc, char *argv[])
{
    fprintf(stderr, "EACCES: %s\n", strerror(EACCES)); //EACCES: Permission denied
    errno = ENOENT;
    perror(argv[0]);
    
    return 0;
} // main
