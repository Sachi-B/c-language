#include<stdio.h>

void main()
{
	int x[10],n,value;
	int i = 0;
	
	printf("How much value you want to enter: ");
	scanf("%d",&n);

	while(i<n)
	{	
		printf("Enter the array value: ");
		scanf("%d",&x[i]);
		i++;
	}
	
	for(i=0;i<n;i++)
	{	
		printf(" %d  ",x[i]);
	}

	printf("\n\n");

	for(i=n-1;i>=0;i--)
	{	
		printf(" %d  ",x[i]);
	
	}
}




