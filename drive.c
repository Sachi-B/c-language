#include<stdio.h>
int main()
{
    int age;
    printf("\nEnter your age:");
    scanf("%d",&age);
    if(age < 18)
    printf("You are not eligible to drive");
    else if(age >= 18)
    printf("You are eligible to drive");
    else
    printf("Age is invalid");
}