#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
    getcwd function in C:
        The getcwd() function copies an absolute pathname of the current working directory
        to the array pointed to by buf, which is of length size.

        If the current absolute path name would require a buffer longer than size elements,
        -1 is returned, and errno is set to ERANGE;
        an application should check for this error, and allocate a larger buffer if necessary.

        If buf is NULL, the behaviour of getcwd() is undefined.

        Syntax:
                 char * getcwd(char *buf, size_t size);
        
        RETURN VALUE
            -1 on failure (for example, if the current directory is not readable), 
            with errno set accordingly, 
            and the number of characters stored in buf on success. 
            The contents of the array pointed to by buf is undefined on error.
            
            Note that this return value differs from the getcwd(3) library function, 
            which returns NULL on failure and the address of buf on success.
*/
int main(int argc, char const *argv[])
{
    char buff[100];
    getcwd(buff, sizeof(buff));
    printf("the current path: %s\n", buff);
    return 0;
}
