//Wap to read a file and count no. of characters,blank spaces, tabs and lines in file
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char filename[100], ch;

    int characters = 0, spaces = 0, tabs = 0, lines = 0;

    printf("Enter the filename to open: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Could not open file %s. Please check if the file exists.\n", filename);
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        characters++;

        if (ch == ' ')
        {
            spaces++;
        } else if (ch == '\t')
        {
            tabs++;
        } else if (ch == '\n')
        {
            lines++;
        }
    }

    if (characters > 0 && ch != '\n')
    {
        lines++;
    }

    fclose(fp);

    printf("\n--- File Statistics ---\n");
    printf("Total Characters: %d\n", characters);
    printf("Blank Spaces:     %d\n", spaces);
    printf("Tabs:             %d\n", tabs);
    printf("Lines:            %d\n", lines);

    return 0;
}
