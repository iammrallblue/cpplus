#include <stdio.h>

int main()
{
	printf("First line\n");
	// some other code here

	printf("Hello");
	printf("Hello Again");

	
	int* ptr = NULL;
	*ptr = 18; // seg fault	

	printf("World\n");


} // main
