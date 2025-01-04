/*create a c program which will take two values from the user and do the following with the help of functions.
1.If user press 1 swap those numbers.
2.If user press 2 return or print their multiplication
3.If user press 3 find out the power of 1 number to another.
4.If user press 4 take input for two float values and print their addition subtraction multiplication division.*/
#include<stdio.h>
#include<math.h>
void swap(int *a,int *b)
{
    printf("Before swap %d and %d\n",*a,*b);
    int c;
    c=*a;
    *a=*b;
    *b=c;
    
    printf("After swap %d and %d\n",*a,*b);
    

}
void multiply(int *a,int *b)
{
    int x;
    printf("Multiplication=%d\n",(*a)*(*b));
}
void num(int *c,int *d)
{
    printf("\nEnter value of c:");
    scanf("%d",&c);
    printf("\nEnter value of d:");
    scanf("%d",&d);
    printf("Multiplication=%d\n",(*c)*(*d));
    printf("Division=%d\n",(*c)/(*d));
    printf("Addition=%d\n",(*c)+(*d));
    printf("Subtraction-%d\n",(*c)-(*d));

}
int main()
{
    int a,b,c,d;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
 swap(&a,&b);
multiply(&a,&b);
num(&c,&d);
}