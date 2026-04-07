//Wap to enter a number in one file and print its reverse in another file.
#include <stdio.h>

int main()
{
    FILE *fIn, *fOut;
    int num, reversedNum=0, remainder;

    fIn=fopen("input.txt", "r");
    if (fIn==NULL) {
        printf("Error: input.txt not found. Please create it with a number.\n");
        return 1;
    }

    if (fscanf(fIn, "%d", &num) != 1) {
        printf("Error: Could not read a valid number from the file.\n");
        fclose(fIn);
        return 1;
    }
    fclose(fIn);

    int temp=num;
    while (temp!=0) {
        remainder=temp%10;
        reversedNum=reversedNum*10+remainder;
        temp/=10;
    }

    fOut=fopen("output.txt", "w");
    if (fOut==NULL) {
        printf("Error: Could not create output.txt\n");
        return 1;
    }

    fprintf(fOut, "%d", reversedNum);
    fclose(fOut);

    printf("Original: %d\n", num);
    printf("Reversed: %d\n", reversedNum);
    printf("Successfully written to output.txt\n");

    return 0;
}
