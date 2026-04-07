//Write a program to enter N elements and search a value from the list using linear search.
#include <stdio.h>

int main()
{
    int a[100], n, i, searchElement, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the value to search: ");
    scanf("%d", &searchElement);

    for (i = 0; i < n; i++) {
        if (a[i] == searchElement) {
            printf("Element %d found at index %d (Position %d).\n", searchElement, i, i + 1);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Element %d is not present in the list.\n", searchElement);
    }

    return 0;
}
