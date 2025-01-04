#include<stdio.h>

int main()
{
	int no;
	printf("\n enter number:");
	scanf("%d",&no);
	
	if(no%2==0)
	{
		printf("\n %d is even number",no);
	}
	else
	{
		printf("\n %d is odd number",no);
	}
	
	printf("\n");
	return 0;
}


