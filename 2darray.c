#include<stdio.h>
int main()
{
	int n[3][2];
	int r,c;
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("\n enter value at position n[%d][%d]----",r,c);
			scanf("%d",&n[r][c]);
		}
	}
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<2;c++)
		{
			//printf("\n enter value at position n[%d][%d]----",r,c);
			printf("%d \t",n[r][c]);
		}
		printf("\n");
	}
	printf("\n\n");
	
	return 0;
}