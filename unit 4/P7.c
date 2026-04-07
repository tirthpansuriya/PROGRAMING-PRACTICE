//Wap to add records in file as per following structure. (empcode, empname , salary)then read the content and find out employee who earns highest salary.
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
    int n, i;
    struct Employee e, highest;

    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for employee %d\n", i + 1);
        printf("Emp Code: ");
        scanf("%d", &e.empcode);
        printf("Name: ");
        scanf("%s", e.empname);
        printf("Salary: ");
        scanf("%f", &e.salary);

        fwrite(&e, sizeof(struct Employee), 1, fp);
    }
    fclose(fp);

    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    highest.salary=-1.0;

    printf("\n--- Searching for Highest Salary ---\n");
    while (fread(&e, sizeof(struct Employee), 1, fp))
    {
        if (e.salary>highest.salary)
        {
            highest=e;
        }
    }

    if (highest.salary!=-1.0) {
        printf("Highest Salary Employee:\n");
        printf("Code: %d, Name: %s, Salary: %.2f\n",
                highest.empcode, highest.empname, highest.salary);
    } else {
        printf("No records found.\n");
    }

    fclose(fp);
    return 0;
}
