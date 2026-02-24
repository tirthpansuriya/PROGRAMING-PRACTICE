// enter n elemants and print them.


#include<stdio.h>

  int main ()
  {
      int n,i;

      printf("enter the value of n:-");
      scanf("%d,&n");

      int arr [n];

      printf("enter the & element:-",n);

      for (i=0;i<n;i++);
      {
          scanf("%d",&arr[i]);
      }
      for(i=0;i<n;i++)
      {
          printf("%d",arr[i]);
      }

      return 0;
  }

