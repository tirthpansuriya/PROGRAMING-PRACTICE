
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int len, flag = 0;

    printf("Enter string: ");
    gets(str);

    len = strlen(str);

    for(int i = 0; i < len; i++)
        rev[i] = str[len - i - 1];

    rev[len] = '\0';

    if(strcmp(str, rev) == 0)
        printf("String is Palindrome\n");
    else
        printf("String is Not Palindrome\n");

    return 0;
}
