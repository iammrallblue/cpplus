#include <stdio.h>

int main(int argc, char* argv[], char* envp[])
{
	char* sep = "******************************\n";
	for (int i = 0; i < argc; i++) printf("%s\n", argv[i]);
	printf(sep);
	for (int i = 0; argv[i] != NULL; i++) printf("%s\n", argv[i]);
	printf(sep);
	for (int i = 0; envp[i] != NULL; i++) printf("%s\n", envp[i]);

} // main
