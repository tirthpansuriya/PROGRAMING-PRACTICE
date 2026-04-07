//Wap to print no. of arguments and list of strings given in command line.
#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;

    printf("Total number of arguments: %d\n", argc);

    printf("List of arguments:\n");
    for (i = 0; i < argc; i++) {
        printf("Argument [%d]: %s\n", i, argv[i]);
    }

    return 0;
}
