
#include<stdio.h>
int main()
{	int a[2][3],b[2][3],sum[2][3],i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("enter value matrix A");
		scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("enter value matrix B");
		scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
		sum[i][j]=a[i][j]+b[i][j];
		printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}