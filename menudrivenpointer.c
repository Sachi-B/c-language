#include<stdio.h>
int main()
{
    int num,program;
    int *p;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Enter the number of program to be performed:");
    scanf("%d",&program);
    switch(program)
    {
        case 1:
        printf("p=%u\n",p);
        p++;
        printf("p++ =%u \n",p);
        break;
        case 2:
        printf("p=%u\n",p);
        p++;
        printf("p++ =%u \n",p);
        break;
        case 3:
        if(*p%2==0)
        printf("Even");
        else
        printf("Odd");
        break;
        case 4:
        if(*p>0)
        printf("Positive");
        else
        printf("Negative");
        break;
    }
}