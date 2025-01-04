#include<stdio.h>
void main()
{
   int a=22;
    int *p1=&a;
    printf("p=%u\n",p1);
    p1++;
    printf("p++ =%u \n",p1);
    p1--;
    printf("p-- =%u \n",p1);
    printf("**************\n");
    char b=3;
    char *p2=&b;
    printf("p=%u\n",p2);
    p2++;
    printf("p++ =%u \n",p2);
    p2--;
    printf("p-- =%u \n",p2);
    printf("**************\n");
    float c=36;
    float *p3=&c;
    printf("p=%u\n",p3);
    p3++;
    printf("p++ =%u \n",p3);
    p3--;
    printf("p-- =%u \n",p3);
}