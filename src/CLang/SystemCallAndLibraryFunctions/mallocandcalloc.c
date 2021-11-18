#include <stdio.h>
#include <stdlib.h>

/*
    calloc function:
        Description
            The C library function void *calloc(size_t nitems, size_t size)
            allocates the requested memory and returns a pointer to it.

            Parameters
                nitems − This is the number of elements to be allocated.
                size − This is the size of elements.

        Key points:
            The difference in malloc and calloc is that
            malloc does not set the memory to zero where as
            calloc sets allocated memory to zero.

        // calloc() 分配内存空间并初始化
        char *str1 = (char *)calloc(10, 2);
        // malloc() 分配内存空间并用 memset() 初始化
        char *str2 = (char *)malloc(20);
        memset(str2, 0, 20);
*/

int main(int argc, char *argv[])
{
    int size;
    int *i_ptr; // int type pointer

    printf("Number of elements to be entered: ");
    scanf("%d", &size);

    /* Initialize Dynamic memory blocks. */
    i_ptr = (int *)calloc(size, sizeof(int)); // casting to int type

    printf("Enter %d numbers: \n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &i_ptr[i]); // input size of numbers.
    } // for

    // output result
    printf("The numbers entered are: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", i_ptr[i]);
    } // for

    free(i_ptr);

    return 0;
} // main
