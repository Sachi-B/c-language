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
	printf("Enter the value you want to search: ");
	scanf("%d",&value);
			
	//Searching the data	
	i = 0;
	while(i < n)
	{
		if(x[i] == value)
		{
			printf("The value -> %d is at index %d\n",value, i);
		}
		i++;
		
	}
	
}
