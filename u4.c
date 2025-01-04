#include<stdio.h>

int main()
{
	int x[2][4];
	int r,c;
	
	for(r=0;r<2;r++)
	{
		for(c=0;c<4;c++)
		{
				//printf("\n enter value");
			printf("\n enter value for pos - [%d] [%d] : ",r,c);
			scanf("%d",&x[r][c]);
		}
	}
		
	printf("\n\n\n\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<4;c++)
		{
				//printf("\n enter value");
			printf("%d \t",x[r][c]);
						  
		}
		printf("\n");
	}
	printf("\n\n\n\n");
	
	return 0;
}