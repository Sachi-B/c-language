#include<stdio.h>
void decrement(int *a)
{
    *a=*a-1;

}
void main()
{
    int a;
    printf("Enter the value of a:");
    scanf("%d",&a);
    decrement(&a);
    printf("\n a is = %d\n",a);
    

}