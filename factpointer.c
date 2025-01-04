#include<stdio.h>

int main()
{
    int i,fact=1,num;
    int *p;
 
    printf("Enter a number: ");
    scanf("%d",&num);
    p=&num;
     
    for(i=1;i<=num;i++)
    {
      fact=fact*i;
    } 
    p=&fact;
      printf("Factorial of %d is: %d \n",num,*p);
      return 0;
}