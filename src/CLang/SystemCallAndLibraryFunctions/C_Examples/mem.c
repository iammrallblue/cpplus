#include <stdio.h>
#include <stdlib.h>

// C does not support function overloading
void print_i(int i)
{
    printf("%d\n", i);
} // print_i

void print_d(double d)
{
    printf("%.3f\n", d); // keep 3 decimal places.
} // print_d

int main(int argc, char *argv[])
{
    // a split line
    char *sep = "*** *** *** *** *** *** *** *** *** *** ***\n\n";
    // printf("%s", sep);

    // // call functions
    // print_i(5);
    // print_d(1.88);

    // the malloc function void *malloc(size_t size) allocates
    // the requested memory and returns a pointer to it.
    // may be used to alloc single item, or an array
    printf("%s", sep);
    double *dptr = malloc(sizeof(double));
    // sizeof(double) the size of memory block in bytes.
    *dptr = 12.27;
    printf("the address dptr pointed to is: %p \n", dptr);
    printf("double pointer dptr points to a double value = %.3f\n", *dptr);
    // output the value pointed by the double pointer
    free(dptr);

    int size = 16;
    double *dptr_a = malloc(size * sizeof(double));
    for (int i = 0; i < size; i++)
    {
        printf("dptr_a[%d] = %f\n", i, dptr_a[i]);
    }             // for
    free(dptr_a); // release pointer

    // calloc, taks in 2 parameters: size of the array and size of a single array element
    // gurantees zero-initialization
    printf("%s", sep);
    int *iptr_a = calloc(size, sizeof(int)); // allocate dynamic memory
    for (int i = 0; i < size; i++)
    {
        printf("iptr_a[%d] = %d\n", i, iptr_a[i]);
    } // for
    free(iptr_a);

    // realloc
    printf("%s", sep);
    char *cptr_a = malloc(size * sizeof(char));
    for (int i = 0; i < size - 1; i++)
    {
        cptr_a[i] = 'a' + 1;
    } // for

    cptr_a[size - 1] = '\0';
    printf("str = %s\n", cptr_a);

    // realloc will try to resize a previously dynamically allocated memory block
    // if not possible, it will thne try to create a new block of memory and copy
    // old contents to the new location
    char *c_ptr = realloc(cptr_a, 2000 * size * sizeof(char));
    printf("str2= %s\n", c_ptr);
    printf("c_ptr= %p\n", c_ptr);

    c_ptr = realloc(c_ptr, 0);
    printf("c_ptr after realloc to 0: c_ptr= %p\n", (void *)c_ptr);

    // free(c_ptr); not necessary b/c realloc to size 0 has the same effect.
    return 0;
} // main
