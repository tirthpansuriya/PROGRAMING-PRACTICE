#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character
    str[strcspn(str, "\n")] = '\0';

    strrev(str);

    printf("Reversed string (using strrev) = %s\n", str);

    return 0;
}

