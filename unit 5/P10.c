//Write a program to sort 5 strings in descending order.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[5][50], temp[50];
    int i, j;

    printf("Enter 5 strings:\n");
    for (i=0; i<5; i++) {
        printf("String %d: ", i + 1);
        scanf("%s", str[i]);
    }

    for (i=0; i<5-1; i++) {
        for (j=0; j<5-i-1; j++) {
            if (strcmp(str[j], str[j+1])<0) {
                strcpy(temp, str[j]);
                strcpy(str[j], str[j+1]);
                strcpy(str[j+1], temp);
            }
        }
    }

    printf("\nStrings in descending order:\n");
    for (i=0; i<5; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}
