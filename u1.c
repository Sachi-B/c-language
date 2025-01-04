#include<stdio.h>

int main()
{

	int marks[5],pos;
	
	for(pos=0;pos<5;pos++)
	{
		printf("\n enter value:");
		scanf("%d",&marks[pos]);
	}
	
	//value at pos 0 = 
	for(pos=0;pos<5;pos++)
	{
		printf("\n value at pos %d = %d",pos,marks[pos]);
	}
	
	return 0;
}