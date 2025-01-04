#include<stdio.h>
struct student
{
	int id;
	char name[50];
	int m1;
	int m2;
	int m3;
	
};

void main()

{
	
	struct student s;
	printf("\n enter id");
	scanf("%d",&s.id);
	printf("\n enter name");
	scanf("%s",s.name);
	printf("\n enter m1");
	scanf("%d",&s.m1);
	printf("\n enter m2");
	scanf("%d",&s.m2);
	printf("\n enter m3");
	scanf("%d",&s.m3);
	int sum,percent;
	sum=s.m1+s.m2+s.m3;
	percent=sum/3;
	printf("\n id %d \n",s.id);
	printf("\n name %s \n",s.name);
	printf("\n sum of marks %d",sum);
	printf("\n percentage %d",percent);

	
}