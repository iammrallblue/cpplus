#include <stdio.h>
#include <fcntl.h>

int main()
{
	int fd;
	char* filename = "example.txt";
	
	int oflags = O_WRONLY | O_CREAT | O_TRUNC | O_EXCL;
	printf("O_WRONLY = %d, O_CREAT = %d, O_TRUNC = %d, O_EXCL = %d\n", O_WRONLY, O_CREAT, O_TRUNC, O_EXCL);
	
	fd = open(filename, oflags, 0600);
	
	if (fd == -1) perror("creat2");
	else printf("Successfully creatd %s; fd = %d\n", filename, fd);

} // main
