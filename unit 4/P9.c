//Wap to read a file and find out no. of upper case letters , lower case letters, special symbols, digits and vowels in the file.
#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    char filename[100], ch;
    int upper=0, lower=0, digits=0, special=0, vowels=0;

    printf("Enter the filename: ");
    scanf("%s", filename);

    fp=fopen(filename, "r");

    if (fp==NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    while ((ch=fgetc(fp))!=EOF) {
        if (isupper(ch)) {
            upper++;
        } else if (islower(ch)) {
            lower++;
        }

        if (isdigit(ch)) {
            digits++;
        }

        if (!isalnum(ch) && !isspace(ch)) {
            special++;
        }

        // 4. Check for Vowels (Case-insensitive)
        char lowerCh=tolower(ch);
        if (lowerCh=='a' || lowerCh=='e' || lowerCh=='i' ||
            lowerCh=='o' || lowerCh=='u') {
            vowels++;
        }
    }

    fclose(fp);

    printf("\n--- File Analysis Results ---\n");
    printf("Uppercase Letters: %d\n", upper);
    printf("Lowercase Letters: %d\n", lower);
    printf("Digits:            %d\n", digits);
    printf("Special Symbols:   %d\n", special);
    printf("Vowels:            %d\n", vowels);

    return 0;
}
