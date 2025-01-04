#include<stdio.h>
struct product
{
	int id;
	char name[30];
	int price;
};


void main()
{
	int i,n;
	printf("\n enter no of products");
	scanf("%d",&n);
	struct product st[n];
	for(i=0;i<n;i++)
	
	{

		printf("enter records of %d product",i+1);
		printf("\n enter id:");
		scanf("%d",&st[i].id);
		printf("\n enter name:");
		scanf("%s",st[i].name);
		printf("\nEnter price of product:");
		scanf("%d",&st[i].price);
	}
	
	printf("\n products information list");
    for(i=0;i<n;i++)
    {
    	if(st[i].price<20000 && st[i].price>5000)
    	{
    	printf("\n product id=%d\nproduct name=%s\nproduct price=%d",st[i].id,st[i].name,st[i].price);
    	}
    }
    
}
