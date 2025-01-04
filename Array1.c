#include<stdio.h>
int main()
{
	int s[5],i,sum=0,avg,per;
	for(i=0;i<5;i++)
	{
		printf("enter value:");
		scanf("%d",&s[i]);//s[1]=5
		sum=sum+s[i]; //sum=sum+s[0] //sum=1+5 //sum=6
	}
	for(i=0;i<5;i++)
	{
		printf("s[%d] is %d\n",i,s[i]);
		
	}
	avg=sum/5;
	per=(sum*100)/250;
	printf("Avg is %d:",avg);
	printf("percentage is %d:",per);
	return 0;
}