#include <stdio.h>
#include <stdlib.h>

// C does not support function overloading
void print_i (int i)
{
	printf("%d\n", i);
} // print_i 

void print_d (double d)
{
	printf("%f\n", d);
} // print_d

int main ()
{
	char* sep = "******************************************\n";
	printf(sep);
	print_i(5);
	print_d(1.8);

	// malloc takes in a single parameter representing the number of bytes
	// may be used to alloc single item, or an array
	printf(sep);
	double* dptr = malloc(sizeof(double));
	*dptr = 12.27;
	printf("dptr points to a double = %f\n", *dptr);
	free(dptr);

	int size = 16;
	double* dptr_a = malloc(size * sizeof(double));
	for (int i = 0; i < size; i++) {
		printf("dptr_a[%d] = %f\n", i, dptr_a[i]);
	} // for
	free(dptr_a);	
	
	// calloc, takes in 2 parameters: size of the array and size of a single array element
	// guarantees zero-initialization
	printf(sep);
	int* iptr_a = calloc(size, sizeof(int));
	for (int i = 0; i < size; i++) {
		printf("iptr_a[%d] = %d\n", i, iptr_a[i]);
	} // for
	free(iptr_a);

	// realloc
	printf(sep);
	char* cptr_a = malloc (size * sizeof(char));
	for (int i = 0; i < size-1; i++) {
		cptr_a[i] = 'a' + i;
	} // for
	cptr_a[size-1] = '\0';
	printf("str = %s\n", cptr_a);
	
	// realloc will try to resize a previously dynamically allocated memory block
	// if not possible, it will then try to create a new block of memory and copy
	// old contents to the new location
	char* cptr2 = realloc(cptr_a, 20000*size*sizeof(char));
	printf("str2 = %s\n", cptr2);

	cptr2 = realloc(cptr2, 0);
	printf("after realloc to 0, cptr2 = %p\n", (void*) cptr2);
	// free(cptr2); // not necessary because realloc to size 0 has the same effect

} // main
