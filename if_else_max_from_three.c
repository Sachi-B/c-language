#include<stdio.h>

int main()
{
	int a=30,b=20,c=100;
	
	if(a>b)
	{
		if(a>c)
		{
			printf("\n a=%d is bigger",a);
		}
		else
		{
			printf("\n c=%d is bigger",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("\n b=%d is bigger",b);
		}
		else
		{
			printf("\n c=%d is bigger",c);
		}
	}
	
	printf("\n");
	return 0;
}