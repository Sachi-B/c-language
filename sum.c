#include<stdio.h>

void main()
{
	int x[10],n,value,sum=0;
	int i = 0;
	
	printf("How much value you want to enter: ");
	scanf("%d",&n);//n=3

	while(i<n)
	{	
		printf("Enter the array value: ");
		scanf("%d",&x[i]);
		i++;
	}
	
	for(i=0;i<n;i++)
	{	
		printf(" %d  ",x[i]);
		sum=sum+x[i]; 
	}

	printf("\n\n");
	printf("Sum of all array values = %d  ",sum);
	
	
}
