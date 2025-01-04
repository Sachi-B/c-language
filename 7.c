/*Define a structure to represent a date. Use your structures that accept two different dates in the
format mm dd of the same year. Write a C program to display the month names of both dates.*/
#include<stdio.h>
struct date1
{
    int day1;
    int month1;
    int year1;
    int day2;
    int month2;
    int year2;
};
void main()
{
    struct date1 s;
    printf("Please enter two dates with same year");
    printf("For first date \n Please enter day:");
    scanf("%d",&s.day1);
    printf("\nEnter month:");
    scanf("%d",&s.month1);
    printf("\nEnter year:");
    scanf("%d",&s.year1);
    printf("\nThe date 1 as entered by you is %d-%d-%d",s.day1,s.month1,s.year1);
    printf("\nFor second date\nPlease enter day:");
    scanf("%d",&s.day2);
    printf("\nEnter month:");
    scanf("%d",&s.month2);
    printf("\nEnter same year as you entered in previous one:");
    scanf("%d",&s.year2);
    printf("\nThe date 2 as entered by you is %d-%d-%d",s.day2,s.month2,s.year2);
    if(s.year1==s.year2)
    {
        if(s.month1==1 || s.month2==1)
        {
            printf("\nJanuary");
        }
        if(s.month1==2 || s.month2==2)
        {
            printf("\nFebruary");
        }
        if(s.month1==3 || s.month2==3)
        {
            printf("\nMarch");
        }
        if(s.month1==4 || s.month2==4)
        {
            printf("\nApril");
        }
        if(s.month1==5 || s.month2==5)
        {
            printf("\nMay");
        }
        if(s.month1==6 || s.month2==6)
        {
            printf("\nJune");
        }
     if(s.month1==7 || s.month2==7)
        {
            printf("\nJuly");
        }
     if(s.month1==8 || s.month2==8)
        {
            printf("\nAugust");
        }
         if(s.month1==9 || s.month2==9)
        {
            printf("\nSeptember");
        }
     if(s.month1==10 || s.month2==10)
        {
            printf("\nOctober");
        }
     if(s.month1==11 || s.month2==11)
        {
            printf("\nNovember");
        }
     if(s.month1==12 || s.month2==12)
        {
            printf("\nDecember");
        }

    }
}