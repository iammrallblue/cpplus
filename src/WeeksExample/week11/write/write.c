#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main()
{
	char* filename = "example.txt";
	int fd = creat(filename, 0644);
	if (fd == -1) perror("open");

	char* buffer = "This is a line to be written to a file.\n";
	if (write(fd, buffer, strlen(buffer)) == -1) perror("write");
	
	close(fd);
} // main
