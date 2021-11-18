#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Dynamic Memory Allocation in C:
        functions: from <stdlib.h>
            malloc(), calloc(), free(), realloc()
                - Allocate and free dynamic memory

    malloc function:
        void *malloc(size_t size);
            llocates size bytes and returns a pointer to
            the allocated memory.
            The memory is not cleared.
            can use memset() function to initilized memory.

        Parameters
            size - This is the size of the memory block, in bytes.

    calloc function:
        void *calloc(size_t nitems, size_t size);
            allocates memory for an array of nmemb elements
            of size bytes each and returns a pointer to
            the allocated memory.
            The memory is set to zero.
        Parameters
            nitems − This is the number of elements to be allocated.
            size − This is the size of elements.

    Key points:
        The difference in malloc and calloc is that
        malloc does not set the memory to zero where as
        calloc sets allocated memory to zero.

    realloc function:
        void *realloc(void *ptr, size_t size);
            changes the size of the memory block pointed
            to by ptr to size bytes.
            The contents will be unchanged to the minimum of
            the old and new sizes;
            newly allocated memory will be uninitialized.

            If ptr is NULL, the call is equivalent to malloc(size);
            if size is equal to zero, the call is equivalent to free(ptr).
            Unless ptr is NULL, it must have been returned by an earlier call to
            malloc(), calloc() or realloc().
        Parameter:

    free function:
        void free(void *ptr);
            frees the memory space pointed to by ptr,
            which must have been returned by a previous call to malloc(),
            calloc() or realloc().
            Otherwise, or if free(ptr) has already been called before,
            undefined behaviour occurs.
            If ptr is NULL, no operation is performed.
*/
int main(int argc, char *argv[])
{
    // Example: if we need an array of n ints, then we can do
    // int
    // int* A = malloc(n*sizeof(int));

    char *str; // a pointer not yet pointed to the memory block

    // str = "test Linux wowo.";

    // malloc function
    str = (char *)malloc(15); // void *malloc(size_t size), type casting to char *
    strcpy(str, "test Linux wowo.");
    // copy the string to memory block which str pointer pointed to.
    printf("String= %s, Address= %p\n", str, str);

    /* Reallocating memory */
    str = (char *)realloc(str, 25);
    strcat(str, ".bella");
    printf("String= %s, Address= %p\n", str, str);

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
    }                           // for

    // output result
    printf("The numbers entered are: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", i_ptr[i]);
    } // for

    free(i_ptr);

    return 0;
} // main
