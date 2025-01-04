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
	printf("\n elemnts are:");
	for(i=0;i<n;i++)
	{
		printf("\n %d",*(ptr+i));
	}
}