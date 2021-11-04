#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
	char* filename = "example.txt";
	int fd = open(filename, O_RDONLY);
	if (fd == -1) perror("open");
	else printf("Successfully opened %s; fd = %d\n", filename ,fd);
	
	int cr = close(fd);
	if (cr == -1) perror("close");
	else printf("Successfully closed %s; cr = %d\n", filename, cr);

} // main
