//Wap to write string in “greencity.txt” and print it in reverse order in file “cleancity.txt”
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE *fGreen, *fClean;
    char str[100];
    int length, i;

    fGreen = fopen("greencity.txt", "w");
    if (fGreen == NULL)
    {
        printf("Error opening greencity.txt!\n");
        return 1;
    }

    printf("Enter a string to save: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;

    fprintf(fGreen, "%s", str);
    fclose(fGreen);

    fGreen = fopen("greencity.txt", "r");
    fClean = fopen("cleancity.txt", "w");

    if (fGreen == NULL || fClean == NULL)
    {
        printf("Error opening files for processing!\n");
        return 1;
    }

    fgets(str, sizeof(str), fGreen);
    length = strlen(str);

    for (i = length - 1; i >= 0; i--)
    {
        fputc(str[i], fClean);
    }

    printf("String written to greencity.txt and reversed in cleancity.txt successfully.\n");

    fclose(fGreen);
    fclose(fClean);

    return 0;
}
