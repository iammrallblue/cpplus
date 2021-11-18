#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>

void printPermissions (struct stat* buf)
{
	printf("File Permissions: %c%c%c%c%c%c%c%c%c\n",
		(((buf->st_mode & S_IRUSR) != 0) ? 'r' : '-'),	// user-read?
		(((buf->st_mode & S_IWUSR) != 0) ? 'w' : '-'),	// user-write?
		(((buf->st_mode & S_IXUSR) != 0) ? 'x' : '-'),	// user-execute?
		(((buf->st_mode & S_IRGRP) != 0) ? 'r' : '-'),	// group-read?
		(((buf->st_mode & S_IWGRP) != 0) ? 'w' : '-'),	// group-write?
		(((buf->st_mode & S_IXGRP) != 0) ? 'x' : '-'),	// group-execute?
		(((buf->st_mode & S_IROTH) != 0) ? 'r' : '-'),	// other-read?
		(((buf->st_mode & S_IWOTH) != 0) ? 'w' : '-'),	// other-write?
		(((buf->st_mode & S_IXOTH) != 0) ? 'x' : '-'));	// other-execute?
} // printPermissions

int main()
{
	char* filename = "example.txt";
	int fd = creat(filename, 0444);
	if (fd == -1) perror("creat");
	
	struct stat buf;
	fstat(fd, &buf);
	printPermissions(&buf);

	chmod(filename, S_IRWXU);
	fstat(fd, &buf);
	printPermissions(&buf);

	fchmod(fd, S_IRUSR | S_IWGRP | S_IXOTH);
	fstat(fd, &buf);
	printPermissions(&buf);
	
	fchmod(fd, 0777);
	fstat(fd, &buf);
	printPermissions(&buf);

} // main
