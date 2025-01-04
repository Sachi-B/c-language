
#include<stdio.h>
int main()
{	int s[5],i,val,j;
	for(i=0;i<5;i++)
	{
		printf("enter value");
		scanf("%d",&s[i]);
		
	}
	//12 11 23 14 29
	//max=s[0];
	for(i=0;i<5;i++)
	{
		
		for(j=0;j<i;j++)
		{
			if(s[j]>s[i])
			{
					val=s[i];
					s[i]=s[j];
					s[j]=val;
			}
		}
	}
	
	for(i=0;i<5;i++)
	{
		printf("%d ",s[i]);
	
		
	}



	
	return 0;
}