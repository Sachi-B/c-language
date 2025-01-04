#include<stdio.h>

int main()
{
	int perc;
	printf("\n enter your percentage:");
	scanf("%d",&perc);
	
	if(perc>=35 && perc<=100)
	{
		printf("\n you are pass");
	}
	else
	{
		printf("\n sorry try hard");
		printf("\n sorry you have entered wrong percentage");
	}
	
	printf("\n");
	return 0;
}


