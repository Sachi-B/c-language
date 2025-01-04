#include<stdio.h>

int main()
{
    int num1,num2;
    printf("Find the Biggest Number\n");
    printf("Enter 1st Number : ");
    scanf("%d",&num1);
    printf("Enter 2nd Number : ");
    scanf("%d",&num2);
    printf("",num1>num2 ? printf("%d is bigger than %d\n",num1,num2) : printf("%d is bigger than %d\n",num2,num1));
    printf("Find the Smallest Number\n");
    printf("Enter 1st Number : ");
    scanf("%d",&num1);
    printf("Enter 2nd Number : ");
    scanf("%d",&num2);
    printf("",num1<num2 ? printf("%d is smaller than %d\n",num1,num2) : printf("%d is smaller than %d\n",num2,num1));
    return 0;
}