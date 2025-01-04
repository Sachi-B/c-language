#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,*ptr;
	printf("enter number of elements:");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr == NULL)
	{
		printf("error! memory not allocated:");
		exit(0);
	}
	printf("\n enter elemets:\n");
	for(i=0;i<n;i++)
	{
		printf("\n enter number:");
		scanf("%d",(ptr + i));
	}
	for(i=0;i<n;i++)
	{
		if(ptr+i %2==0)
		{
			printf("\n %d is even",*(ptr+i));
		}
		else
		{
			printf("\n %d is odd",*(ptr+i));
		}
	}
}