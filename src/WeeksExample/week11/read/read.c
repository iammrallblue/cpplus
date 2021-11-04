#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFSIZE 16

int main()
{
	char* filename = "example.txt";
	int fd = open(filename, O_RDONLY);
	if (fd == -1) perror("open");

	int n;
	char buffer[BUFFSIZE];

	while ((n = read(fd, buffer, BUFFSIZE)) > 0) {
		//printf("n = %d\n", n);
		//printf("%s", buffer); // not valid, buffer should not be interpreted as a C-string (end with '\0')
		//for (int i = 0; i < n; i++) printf("%c", buffer[i]);
		write(STDOUT_FILENO, buffer, n);
	} // while
	if (n == -1) perror("read");

	close(fd);
} // main
