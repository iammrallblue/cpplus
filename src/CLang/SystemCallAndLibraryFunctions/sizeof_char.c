#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *buf1 = "abcd1234";
    char buf2[] = "abcd1234";
    printf("size of buf1: %lu\n", sizeof(buf1));
    printf("size of buf2: %lu\n", sizeof(buf2));                  // the size is 9, b/c '\0'
    printf("The length：%lu  %lu\n", strlen(buf1), strlen(buf2)); // the length of both is 8

    char *a = "string1";
    char b[] = "string2"; // con-quanlified
    a = b[0];             // OK, b, or b[0], pointer a is pointed to b's address
    a = "string3";        // OK,
                          // b = a;         //Error, b is con-quanlified, read-only
                          // b = "string3"  //Error, b is con-quanlified, read-only
                          // b[0] = "a"; // Error, b is con-quanlified, read-only
    return 0;
} // main
