#include<stdio.h>

void main()
{
	int x[10],n;
	int i = 0, position;
	
	printf("How much value you want to enter: ");
	scanf("%d",&n);

	while(i<n)
	{	
		printf("Enter the array value: ");
		scanf("%d",&x[i]);
		i++;
	}
	printf("Enter the Index  position to delete value: ");
	scanf("%d",&position); //pos=1
		
	//shifting one position up for deletion	
	while(position<n-1) 1<2
	{
		x[position] = x[position +1];
		position++;
	}
	
	//display the data after deletion	
	i = 0;
	while(i < n-1)
	{
		printf("%d\n",x[i]);
		i++;
	}
	
}


