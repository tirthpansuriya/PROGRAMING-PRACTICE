//Wap which demonstrate fseek(), ftell() and rewind() functions.
#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;

    fp=fopen("demo.txt", "w+");
    if (fp==NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fputs("ABCDEFGHIJ", fp);

    printf("Position after writing 'ABCDEFGHIJ': %ld\n", ftell(fp));

    fseek(fp, 3, SEEK_SET);
    printf("Position after fseek(fp, 3, SEEK_SET): %ld\n", ftell(fp));
    printf("Character at this position: %c\n", fgetc(fp));

    fseek(fp, 2, SEEK_CUR);
    printf("Position after moving 2 bytes forward: %ld\n", ftell(fp));
    printf("Character at this position: %c\n", fgetc(fp));

    rewind(fp);
    printf("Position after rewind(): %ld\n", ftell(fp));
    printf("First character: %c\n", fgetc(fp));

    fseek(fp, -2, SEEK_END);
    printf("Position 2 bytes before the end: %ld\n", ftell(fp));
    printf("Character near end: %c\n", fgetc(fp));

    fclose(fp);
    return 0;
}
