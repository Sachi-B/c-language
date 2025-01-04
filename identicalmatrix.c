#include<stdio.h>
int main()
{
	int a[5][5],b[5][5];
	int r1,c1,r2,c2,i,j;
	int flag = 0;
	//flag variable to check if matrices are identical
	printf("Enter value of rows for matrix a:");
	scanf("%d",&r1);
	printf("Enter value of columns for matrix a:");
	scanf("%d",&c1);
	printf("Enter value of rows for matrix b:");
	scanf("%d",&r2);
	printf("Enter value of columns for matrix b:");
	scanf("%d",&c2);
	//Assigning elements to matrix a
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("Enter elements for matrix a:");
			scanf("%d",&a[i][j]);
		}
	} 
	//Printing all elements of matrix a
	printf("\n Entered elements of matrix a: \n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d ",a[i][j]);
			if(j==c1-1)
			{
				printf("\n");
			}
		}
	}
	//Assigning elements of matrix b
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("Enter elements for matrix b:");
			scanf("%d",&b[i][j]);
		}
	} 
	//Printing all elements of matrix b
	printf("\n Entered elements of matrix b: \n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d ",b[i][j]);
			if(j==c2-1)
			{
				printf("\n");
			}
		}
	}
	//To check whether both the matrix are identical or not
	printf("\n To check whether both the matrix are identical or not: \n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				if(a[i][j]!=b[i][j])
				{
					flag = 1;
					break;
			 	}
			}
		}
	if(flag == 0)
	{
		printf("\n Matrix are identical");
	}
	else
	{
		printf("\n Matrix are not identical");
	}
}