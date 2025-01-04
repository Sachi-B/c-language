#include<stdio.h>

int main()
{
	int a,b,c,d;
	
	printf("\n enter a:");
	scanf("%d",&a);
	printf("\n enter b:");
	scanf("%d",&b);
	printf("\n enter c:");
	scanf("%d",&c);
	printf("\n enter d:");
	scanf("%d",&d);
	
	if(a>b && a>c && a>d)
	{
		printf("\n a=%d has biggest value",a);
	}
	else if(b>c && b>a && b>d)
	{
		printf("\n b=%d has biggest value",b);
	}
	else if(c>a && c>b && c>d)
	{
		printf("\n c=%d has biggest value",c);
	}
	else if(d>a && d>b && d>c)
	{
		printf("\n d=%d has biggest value",d);
	}
	else
	{
		printf("\n all are same or invalid value ");
	}
	
	
	printf("\n");
	return 0;
}
