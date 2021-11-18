#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main (int argc, char* argv[])
{
	if (argc > 1) {
		int fd = open(argv[1], O_RDONLY);
		if (fd == -1) perror("read");
		if (dup2(fd, STDIN_FILENO) == -1) perror("dup2");

		int i;
		printf("Please enter an integer:\n");
		scanf("%d", &i);
		getchar();
		printf("You just entered integer %d\n", i);

		printf("Please enter a character:\n");
		char c = getchar();
		printf("You just entered character %c\n", c);

		if (close(fd) == -1) perror("close");

	} else {
		fprintf(stderr, "Please specify a filename as the command line argument.\n");
	} // if

} // main
