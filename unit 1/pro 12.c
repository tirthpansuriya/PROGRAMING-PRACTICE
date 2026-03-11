#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline character if present
    name[strcspn(name, "\n")] = '\0';

    printf("\nName printed vertically:\n");
    for(i = 0; name[i] != '\0'; i++) {
        printf("%c\n", name[i]);
    }

    return 0;
}

