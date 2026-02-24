#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    int spaces = 0, vowels = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {

        // Count spaces
        if (str[i] == ' ')
            spaces++;

        // Count vowels (both uppercase and lowercase)
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' ||
            str[i] == 'I' || str[i] == 'O' ||
            str[i] == 'U')
            vowels++;

        i++;
    }

    printf("Number of spaces = %d\n", spaces);
    printf("Number of vowels = %d\n", vowels);

    return 0;
}
