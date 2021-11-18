#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFSIZE 1024

int main()
{
	int n;
	char buffer [BUFFSIZE];

	// use Ctrl-D to send EOF in order to inform the program that
	// there's nothing more to read, and so the while loop can be
	// terminated (b/c n would be 0)
	while((n = read (STDIN_FILENO, buffer, BUFFSIZE)) > 0) {
		if (write(STDOUT_FILENO, buffer, n) != n) perror("write");
	} // while
	
	if (n == -1) perror("read");

} // main
