#include<stdio.h>
void increment(int *a)
{
    *a=*a+1;
}
void main()
{
    int a;
    printf("Enter the value of a:");
    scanf("%d",&a);
    increment(&a);
    printf("\n a is = %d\n",a);
}