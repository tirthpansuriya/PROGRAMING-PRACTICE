#include <stdio.h>

// Inner structure
struct Date {
    int day;
    int month;
    int year;
};

// Outer structure (contains another structure)
struct Student {
    int id;
    char name[50];
    struct Date dob;   // Nested structure
};

int main() {
    struct Student s;

    // Input student details
    printf("Enter Student ID: ");
    scanf("%d", &s.id);

    printf("Enter Student Name: ");
    scanf("%s", s.name);

    printf("Enter Date of Birth (day month year): ");
    scanf("%d %d %d", &s.dob.day, &s.dob.month, &s.dob.year);

    // Display student details
    printf("\nStudent Details:\n");
    printf("ID: %d\n", s.id);
    printf("Name: %s\n", s.name);
    printf("Date of Birth: %d/%d/%d\n", s.dob.day, s.dob.month, s.dob.year);

    return 0;
}
