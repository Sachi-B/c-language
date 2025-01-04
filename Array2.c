
#include<stdio.h>
int main()
{	
	int s[5],i,max;
	for(i=0;i<5;i++)
	{
		printf("enter value:");
		scanf("%d",&s[i]);
	}
	//4 78 6 15 23
	max=s[0]; //max=4
	for(i=0;i<5;i++)
	{
		if(s[i]>max) s[2]>78 //6>78
		{
			max=s[i]; max=78
		}
	}
	printf("Maximum is %d:",max);
	return 0;
}