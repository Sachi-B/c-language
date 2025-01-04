#include<stdio.h>

void main()
{
	int x[10],n,value, tem;
	int i = 0, position;
	
	printf("How much value you want to enter: ");
	scanf("%d",&n);//n=3

	while(i<n)
	{	
		printf("Enter the array value: ");
		scanf("%d",&x[i]);
		i++;
	}
	printf("Enter the index position at new value will be insert: ");
	scanf("%d",&position); //position=1
	printf("Enter new value: ");
	scanf("%d",&value);//value=85
	
	
	//shifting one position down for insertion	
	tem = n;//n=3   //tem=3
	while(tem > position ) tem>position 3>1
	{
		x[tem] = x[tem-1]; x[3]=x[2]
		tem--; 
	}
	
	x[position] = value; 
	
	//display the data after insertion	
	i = 0;
	while(i <= n)
	{
		printf("%d\n",x[i]);
		i++;
	}
	
}
