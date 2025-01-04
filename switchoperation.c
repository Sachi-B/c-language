#include<stdio.h>
int main()
{
    int num1,num2,n;
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("\nEnter second number:");
    scanf("%d",&num2);
    printf("1 for addition \n2 for subtraction \n3 for multiplication \n4 for division\n");
    printf("Enter the sign of the function to be performed:");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("%d+%d=%d",num1,num2,num1+num2);
        break;
         case 2:
        printf("%d-%d=%d",num1,num2,num1-num2);
        break;
         case 3:
        printf("%d*%d=%d",num1,num2,num1*num2);
        break;
         case 4:
        printf("%d/%d=%d",num1,num2,num1/num2);
        break;
    }
}