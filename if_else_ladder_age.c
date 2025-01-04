#include<stdio.h>

int main()
{
	int age;
	
	printf("\n enter age:");
	scanf("%d",&age);
	
	if(age>=0 && age<=3)
	{
		printf("\n you are baby");
	}
	else if(age>=4 && age<=12)
	{
		printf("\n you are child");
	}
	else if(age>=13 && age<=17)
	{
		printf("\n you are teenager");
	}
	else if(age>=18 && age<=25)
	{
		printf("\n you are adult");
	}
	else if(age>=26 && age<=35)
	{
		printf("\n you are young");
	}
	else if(age>=36 && age<=55)
	{
		printf("\n you are mature");
	}
	else if(age>=56 && age<=100)
	{
		printf("\n you are old age");
	}
	else
	{
		printf("\n you are not eligible");
	}
	
	
	
	printf("\n");
	return 0;
}