//Wap to read a file and replace all ‘a’ with ‘x’.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fOriginal, *fTemp;
    char filename[100], ch;

    printf("Enter the filename: ");
    scanf("%s", filename);

    fOriginal=fopen(filename, "r");
    if (fOriginal==NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    fTemp=fopen("temp.txt", "w");
    if (fTemp==NULL) {
        fclose(fOriginal);
        printf("Error: Could not create temporary file.\n");
        return 1;
    }

    while ((ch=fgetc(fOriginal))!=EOF) {
        if (ch=='a') {
            fputc('x', fTemp);
        } else if (ch=='A') {
            fputc('X', fTemp);
        } else {
            fputc(ch, fTemp);
        }
    }

    fclose(fOriginal);
    fclose(fTemp);

    remove(filename);
    rename("temp.txt", filename);

    printf("Successfully replaced all 'a' with 'x' in %s\n", filename);

    return 0;
}
