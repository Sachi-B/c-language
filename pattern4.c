#include<stdio.h>
int main()
/*
    *****
     ****
      ***
       **
        *

*/
{
    int i,j,s,n=5;
    for(i=n;i>=1;i--)
    {
    for(s=1;s<=n-i;s++)
    {
        printf(" ");
    }
    for(j=1;j<=i;j++)
    {
    printf("*");
    }
    printf("\n");
    }
}