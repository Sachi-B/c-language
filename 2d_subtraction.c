#include<stdio.h>

int main()
{
	int x1[3][3], x2[3][3],  sub[3][3];
	int r,c;
	
	printf("\n enter value for matrix1");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
				//printf("\n enter value");
			printf("\n enter value for pos - [%d] [%d] : ",r,c);
			scanf("%d",&x1[r][c]);
		}
	}
	
	printf("\n enter value for matrix2");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
				//printf("\n enter value");
			printf("\n enter value for pos - [%d] [%d] : ",r,c);
			scanf("%d",&x2[r][c]);
		}
	}
	
	printf("\nprintting matrix1\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
				//printf("\n enter value");
			printf("%d \t",x1[r][c]);
						  
		}
		printf("\n");
	}
	printf("\n\n");
	
	printf("\nprintting matrix2\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
				//printf("\n enter value");
			printf("%d \t",x2[r][c]);
						  
		}
		printf("\n");
	}
	printf("\n\n");
	
	printf("\nprintting addition\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
				//printf("\n enter value");
			sub[r][c]=x1[r][c]-x2[r][c];
			printf("%d \t",sub[r][c]);
						  
		}
		printf("\n");
	}
	printf("\n\n");
	
	return 0;
}