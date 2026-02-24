#include<stdio.h>


void main ()
{


    int arr[2][3];
    int i,j;

  printf("enter 6 number:");

    for (i=0;i<2;i++)
    {

        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
     printf("entered value are:");
        for(i=0;i<5;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("%d", arr[i][j]);
            }
        }
}
