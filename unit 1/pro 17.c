#include <stdio.h>

int main() {
    char str[100];
    int i = 0, length = 0, flag = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find length manually (excluding newline)
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Check palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("The string is a PALINDROME.\n");
    else
        printf("The string is NOT a palindrome.\n");

    return 0;
}
