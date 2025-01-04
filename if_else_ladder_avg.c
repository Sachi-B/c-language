#include<stdio.h>

int main()
{
	float avg;
	int sub1,sub2,sub3;
	
	printf("\n enter sub1,sub2,sub3:");
	scanf("%d%d%d",&sub1,&sub2,&sub3);
	
	avg=(sub1+sub2+sub3)/3;
	printf("\n average = %.2f",avg);
	
	if(avg>=0 && avg<=34)
	{
		printf("\n you are fail");
	}
	
	printf("\n");
	return 0;
}





	
	