#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[5];
    int i;

    // Input details of 5 students
    for(i = 0; i < 5; i++) {
        printf("\nEnter details for student %d\n", i + 1);

        printf("Roll number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);   // To read full name

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Display details of 5 students
    printf("\n--- Student Records ---\n");
    for(i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll number: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}

