#include<stdio.h>
void pro(int *p1,int *p2)
{
    int a,b;
     p1=&a;
    p2=&b;
    printf("Area of rectangle is %d\n",(*p1)*(*p2));

    int incre;
    incre=(*p1)+1;
    printf("Increment=%d\n",incre);

    if((*p1)>(*p2))
    {
        printf("%d is greater than %d\n",*p1,*p2);
    }
    else
     {
        printf("%d is greater than %d",*p2,*p1);
    }
}
int main()
{
    int a,b;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
pro(&p1,&p2);

}

