#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,*ptr,m;
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
		
			printf("\n %d ",*(ptr+i));
	}
	printf("how many integers would you like to add:");
	scanf("%d",&m);
	printf("\n enter %d more integers",m);
	ptr=(int*)realloc(ptr,(n+m)*sizeof(int));
	for(i=n;i<(n+m);i++)
	{
		printf("\n enter number");
		scanf("%d",ptr+1);
	}
	for(i=0;i<(n+m);i++)
	{
		printf("\n %d",*ptr+i);
	}
	
}