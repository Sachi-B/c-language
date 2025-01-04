#include<stdio.h>
struct student
{   
    int rollno;
    char name[50];
    int m1;
    int m2;
    int m3;
};
void main()
{
    int sum,percentage;
    struct student s;
    printf("\nEnter roll no:" );
    scanf("%d",&s.rollno);
     printf("\nEnter name:" );
    scanf("%s",s.name);
    printf("\nEnter marks for subject 1:" );
    scanf("%d",&s.m1);
    printf("\nEnter marks for subject 2:" );
    scanf("%d",&s.m2);
    printf("\nEnter marks for subject 3:" );
    scanf("%d",&s.m3);
    sum=s.m1+s.m2+s.m3;
    percentage=sum/3;
    printf("\nRoll no:%d",s.rollno);
    printf("\nName:%s",s.name);
    printf("\nSum of marks:%d",sum);
    printf("\nPercentage:%d",percentage);
    if(percentage>80  && percentage<=70 )
    {
        printf("\nDistinction");
    }
    else if(percentage<70 && percentage>=50)
    {
        printf("\nFirst class");
    }
    else{
        printf("\nSecond class");
    }
}