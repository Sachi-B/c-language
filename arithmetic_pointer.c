#include<stdio.h>
void main()
{
    int n1,n2;
    int *p1,*p2;
    printf("Enter the first number:");
    scanf("%d",&n1);
    printf("Enter the second number:");
    scanf("%d",&n2);
    p1=&n1;
    p2=&n2;
    printf("Addition of two numbers is %d\n",(*p1)+(*p2));
    printf("Subtraction of two numbers is %d\n",(*p1)-(*p2));
    printf("Multiplication of two numbers is %d\n",(*p1)*(*p2));
    printf("Division of two numbers is %d\n",(*p1)/(*p2));
}
