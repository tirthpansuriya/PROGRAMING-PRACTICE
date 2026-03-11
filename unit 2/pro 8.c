#include <stdio.h>

// Structure declaration
struct StudentStruct {
    int id;
    float marks;
    char grade;
};

// Union declaration
union StudentUnion {
    int id;
    float marks;
    char grade;
};

int main() {
    struct StudentStruct s;
    union StudentUnion u;

    // Assign values to structure members
    s.id = 101;
    s.marks = 85.5;
    s.grade = 'A';

    // Assign values to union members
    u.id = 101;
    u.marks = 85.5;
    u.grade = 'A';

    printf("Structure values:\n");
    printf("ID = %d\n", s.id);
    printf("Marks = %.2f\n", s.marks);
    printf("Grade = %c\n", s.grade);

    printf("\nUnion values:\n");
    printf("ID = %d\n", u.id);
    printf("Marks = %.2f\n", u.marks);
    printf("Grade = %c\n", u.grade);

    // Size comparison
    printf("\nSize of structure = %lu", sizeof(s));
    printf("\nSize of union = %lu", sizeof(u));

    return 0;
}
