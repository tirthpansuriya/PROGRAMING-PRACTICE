#include<stdio.h>
#include<string.h>


struct student{
      int Rollno;
      char Name[20];
      char Department[40];
      int Yearofjoining;
      float score;
};

int main()
{
    struct student sl;
    printf("Enter student 1 details:");
    scanf("%d %s %s %d %f",&s1.Rollno,&s1.Name,&s1.Department,&s1.Yearofjoining,&s1.Score);


    struct student s2;
    printf("Enter student 2 details:");
    scanf("%d %s %s %d %f",&s2.Rollno,&s2.Name,&s2.Department,&s2.Yearofjoining,&s2.Score);

    struct student s3;
    printf("Enter student 3 details:");
    scanf("%d %s %s %d %f",&s3.Rollno,&s3.Name,&s3.Department,&s3.Yearofjoining,&s3.Score);

    struct student s4;
    printf("Enter student 4 details:");
    scanf("%d %s %s %d %f",&s4.Rollno,&s4.Name,&s4.Department,&s4.Yearofjoining,&s4.Score);

    struct student s5;
    printf("Enter student 5 details:");
    scanf("%d %s %s %d %f",&s5.Rollno,&s5.Name,&s5.Department,&s5.Yearofjoining,&s5.Score);

    Printf("%d %s %s %d %.2f \n",s1.Rollno,s1.Name,s1.Department,s1.Yearofjoining,s1.score);
    Printf("%d %s %s %d %.2f \n",s2.Rollno,s2.Name,s2.Department,s2.Yearofjoining,s2.score);
    Printf("%d %s %s %d %.2f \n",s3.Rollno,s3.Name,s3.Department,s3.Yearofjoining,s3.score);
    Printf("%d %s %s %d %.2f \n",s4.Rollno,s4.Name,s4.Department,s4.Yearofjoining,s4.score);
    Printf("%d %s %s %d %.2f \n",s5.Rollno,s5.Name,s5.Department,s5.Yearofjoining,s5.score);

   return 0;
}
