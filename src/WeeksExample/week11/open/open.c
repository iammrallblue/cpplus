#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int main()
{
	int fd;
	char* filename = "example.txt";
	fd = open(filename, O_RDONLY);
	if (fd != -1)
		printf("Successfully opened %s; fd = %d\n", filename, fd);
	else
		perror("open");

	return EXIT_SUCCESS;
} // main
