#include<stdio.h>

void main()
{
	int x[5] ;
	int i = 0;
	
	while(i<5)
	{
		printf("\n x[%d]----",i);
		scanf("%d",&x[i]);
		i++;
	}
	
	i=0;
	while(i<5) 
	{
		printf("\n x[%d]=%d",i,x[i]);
		i++;
	}
}

























