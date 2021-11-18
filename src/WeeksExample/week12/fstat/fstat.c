#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <time.h>

int main()
{
	int fd = open("example.txt", O_RDONLY);
	if (fd == -1) perror("open");
	struct stat buf; // In C, the "struct" keyword is needed to declare a struct
	fstat(fd, &buf);
	printf("File Permissions: %c%c%c%c%c%c%c%c%c\n",
		(((buf.st_mode & S_IRUSR) != 0) ? 'r' : '-'),	// user-read?
		(((buf.st_mode & S_IWUSR) != 0) ? 'w' : '-'),	// user-write?
		(((buf.st_mode & S_IXUSR) != 0) ? 'x' : '-'),	// user-execute?
		(((buf.st_mode & S_IRGRP) != 0) ? 'r' : '-'),	// group-read?
		(((buf.st_mode & S_IWGRP) != 0) ? 'w' : '-'),	// group-write?
		(((buf.st_mode & S_IXGRP) != 0) ? 'x' : '-'),	// group-execute?
		(((buf.st_mode & S_IROTH) != 0) ? 'r' : '-'),	// other-read?
		(((buf.st_mode & S_IWOTH) != 0) ? 'w' : '-'),	// other-write?
		(((buf.st_mode & S_IXOTH) != 0) ? 'x' : '-'));	// other-execute?
	
	printf("Time of Last Access:		%s", ctime(&buf.st_atime));
	printf("Time of Last Modification:	%s", ctime(&buf.st_mtime));
	printf("Time of Last Status Change:	%s", ctime(&buf.st_ctime));



} // main
