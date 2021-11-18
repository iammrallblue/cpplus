#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
	char *filename = "example.txt";
	int fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		perror("open");
	}

	off_t size = lseek(fd, 0, SEEK_END);

	if (size == -1)
	{
		perror("lseek");
	}
	else
	{
		printf("The size of %s is %ld bytes\n", filename, size);
	}

	close(fd); // could do error checking here

	return 0;
} // main
