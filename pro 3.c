#include<stdio.h>


int main()


    {


        int n,i;
        float sum=0,avg, arr[100];

        printf ("enter number of element:");
        scanf("%d",&n);
        printf("enter %d element ;\n",n);
        for (i=0;i<n; i++)

        {
            scanf("%f",&arr[i]);
            sum+=arr[i];

        }
        avg=sum/n;


          printf("total=%.2f\n",sum);
          printf("average=%.2f\n",avg);

          return 0;
    }
