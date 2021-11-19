#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int opt = 0;

    while ((getopt(argc, argv, ": if : lrx")) != -1)
    {
        switch (opt)
        {
        case 'i':
        case 'l':
        case 'r':
            printf("option: %c\n", opt);
            break;
        case 'f':
            printf("filename: %s\n", optarg);
            break;
        case ':':
            printf("option needs a value\n");
            break;
        case '?':
            printf("unknow option: %c\n", optopt);
            break;

        } // switch

    } // while

    for (; optind < argc; optind++)
    {
        printf("extra arguments: %s\n", argv[optind]);
    } // for
    return 0;
} // main
