#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main (int argc, char* argv[])
{
	for (int i = 0; i < argc; i++)
		printf("i = %d, argv[%d] = %s\n", i, i, argv[i]);	

	printf("Hello 1730 students!\n");

	char c = '#';
	int x = 5;
	double y = 2.789;
	printf("char c = %c, int x = %d, double y = %.2f\n", c, x, y);
	
	int i;
	printf("Please enter an integer: ");
	scanf("%d", &i);
	printf("You just entered %d\n", i);
	getchar();	

	printf("Please enter a character: ");
	scanf("%c", &c);
	printf("You just entered %c\n", c);
	getchar();	
	
	char str[50];
	printf("Please enter a string: ");
	// ^\n means to keep reading until the newline char is encountered
	// but does not read in the \n
	scanf("%[^\n]s", str);
	printf("You just entered %s\n", str);
	getchar();

	printf("Starting getchar putcha section\n"); 
	printf("Please enter any number of chars:\n");
	
	while ((c = getchar()) != EOF) {
		putchar(c);
	} // while

	while (TRUE) {
		printf("Inside the while(true) loop\n");
		break;
	} // while

} // main
