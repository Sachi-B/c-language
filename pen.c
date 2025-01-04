#include<stdio.h>
struct manu
{
	int day;
	char month[50];
	int year;
};
struct pen 
{
	int id;
	char name[50];
	char colour[20];
	char brand[50];
	struct manu d;
};

void display(struct pen a)
{
	printf("\n pen id :%d",a.id);
	printf("\npen name:%s",a.name);
	printf("\n pen colour :%s",a.colour);
	printf("\n pen brand :%s",a.brand);
	printf("\n pen manufacturing date :%d-%s-%d",a.d.day,a.d.month,a.d.year);
}
void main()
{
	struct pen a;
	printf("\nEnter pen id:");
	scanf("%d",&a.id);
	printf("\nEnter pen name:");
	scanf("%s",a.name);
	printf("\nEnter pen colour:");
	scanf("%s",a.colour);
	printf("\nEnter pen brand name:");
	scanf("%s",a.brand);
	printf("\nEnter pen manufacturing date:");
	scanf("%d",&a.d.day);
	printf("\nEnter pen manufacturing month:");
	scanf("%s",a.d.month);
	printf("\nEnter pen manufacturing year:");
	scanf("%d",&a.d.year);
	display(a);
}