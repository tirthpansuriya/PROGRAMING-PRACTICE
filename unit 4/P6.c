//Wap to write a file DATA.Txt which has 1 to 10 numbers and then read this file. If number is odd then store it in “ODD.txt” and if it is even store it in “EVEN.txt”
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fData, *fOdd, *fEven;
    int num, i;

    fData = fopen("DATA.txt", "w");
    if (fData==NULL)
    {
        printf("Error creating DATA.txt\n");
        return 1;
    }

    for (i=1; i<=10; i++)
    {
        fprintf(fData, "%d\n", i);
    }
    fclose(fData);
    printf("DATA.txt created with numbers 1 to 10.\n");

    fData = fopen("DATA.txt", "r");
    fOdd  = fopen("ODD.txt", "w");
    fEven = fopen("EVEN.txt", "w");

    if (fData==NULL || fOdd==NULL || fEven==NULL)
    {
        printf("Error opening files for processing!\n");
        return 1;
    }

    while (fscanf(fData, "%d", &num) != EOF) {
        if (num % 2==0) {
            fprintf(fEven, "%d\n", num);
        } else {
            fprintf(fOdd, "%d\n", num);
        }
    }

    printf("Numbers sorted into ODD.txt and EVEN.txt successfully.\n");

    fclose(fData);
    fclose(fOdd);
    fclose(fEven);

    return 0;
}
