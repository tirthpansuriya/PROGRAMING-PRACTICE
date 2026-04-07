//Wap to find the size of file without traversing character by character.
#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[100];
    long size;

    printf("Enter the filename: ");
    scanf("%s", filename);

    fp=fopen(filename, "rb");

    if (fp==NULL)
    {
        printf("Error: File not found.\n");
        return 1;
    }

    fseek(fp, 0, SEEK_END);

    size = ftell(fp);

    if (size==-1L) {
        printf("Error determining file size.\n");
    } else {
        printf("The size of '%s' is: %ld bytes\n", filename, size);
    }

    fclose(fp);
    return 0;
}
