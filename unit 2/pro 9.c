#include <stdio.h>

// Structure to store date
struct Date {
    int day;
    int month;
    int year;
};

int main() {
    struct Date d1, d2;

    // Input first date
    printf("Enter first date (day month year): ");
    scanf("%d %d %d", &d1.day, &d1.month, &d1.year);

    // Input second date
    printf("Enter second date (day month year): ");
    scanf("%d %d %d", &d2.day, &d2.month, &d2.year);

    // Compare dates
    if (d1.day == d2.day && d1.month == d2.month && d1.year == d2.year) {
        printf("equal");
    } else {
        printf("not equal");
    }

    return 0;
}
