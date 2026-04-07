//Wap to copy one file into another using command line arguments.
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fs, *ft;
    char ch;

    if (argc!=3) {
        printf("Error: Invalid number of arguments.\n");
        printf("Usage: %s <source_file> <target_file>\n", argv[0]);
        return 1;
    }

    fs=fopen(argv[1], "r");
    if (fs==NULL) {
        printf("Error: Cannot open source file %s\n", argv[1]);
        return 1;
    }

    ft = fopen(argv[2], "w");
    if (ft==NULL) {
        printf("Error: Cannot open/create target file %s\n", argv[2]);
        fclose(fs);
        return 1;
    }

    while ((ch = fgetc(fs))!=EOF) {
        fputc(ch, ft);
    }

    printf("File copied successfully from %s to %s.\n", argv[1], argv[2]);

    fclose(fs);
    fclose(ft);

    return 0;
}
