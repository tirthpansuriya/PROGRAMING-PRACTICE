//Wap to append the content in given file.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char filename[100], str[255];

    printf("Enter the filename to append to: ");
    scanf("%s", filename);

    fp=fopen(filename, "a");

    if (fp==NULL)
    {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    printf("Enter the text you want to add to the file:\n");

    getchar();

    fgets(str, sizeof(str), stdin);

    fprintf(fp, "%s", str);

    printf("Content appended successfully.\n");

    fclose(fp);

    return 0;
}
