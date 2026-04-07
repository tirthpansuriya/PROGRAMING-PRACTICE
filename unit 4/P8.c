//Wap to add records in binary file as per following structure. (empcode, empname, salary) and read the content and print on screen
#include <stdio.h>
#include <stdlib.h>

struct Employee
{
    int empcode;
    char empname[50];
    float salary;
};

int main()
{
    FILE *fp;
    struct Employee e;
    int n, i;

    fp=fopen("records.bin", "wb");
    if (fp==NULL)
    {
        printf("Error opening file for writing!\n");
        return 1;
    }

    printf("How many records do you want to add? ");
    scanf("%d", &n);

    for (i=0; i<n; i++)
    {
        printf("\nEnter details for Employee %d\n", i + 1);
        printf("Emp Code: ");
        scanf("%d", &e.empcode);
        printf("Emp Name: ");
        scanf("%s", e.empname);
        printf("Salary: ");
        scanf("%f", &e.salary);

        fwrite(&e, sizeof(struct Employee), 1, fp);
    }
    fclose(fp);
    printf("\nRecords saved successfully!\n");

    fp = fopen("records.bin", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\n--- Employee Records in Binary File ---\n");
    printf("%-10s %-20s %-10s\n", "Code", "Name", "Salary");
    printf("--------------------------------------------\n");

    while (fread(&e, sizeof(struct Employee), 1, fp)) {
        printf("%-10d %-20s %-10.2f\n", e.empcode, e.empname, e.salary);
    }

    fclose(fp);
    return 0;
}
