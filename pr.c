#include<stdio.h>
void main()
{
    int i,j,r,c;
    int arr[i][j];
    printf("Enter the no of rows:");
    scanf("%d",&r);
     printf("Enter the no of cols:");
    scanf("%d",&c);
    for(i=1;i<=r;i++)
    {
        printf("arr[i][j]=%d",arr[i][j]);
    }
    printf("\n");
}