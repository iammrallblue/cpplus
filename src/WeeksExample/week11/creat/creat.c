#include <stdio.h>
#include <fcntl.h>

int main()
{
	int fd;
	char* filename = "example.txt";
	// odin will set group and other's permissions to read-only
	fd = creat(filename, 0666);

	if (fd == -1) perror("creat");
	else printf("Successfully created %s; fd = %d\n", filename ,fd);

} // main
