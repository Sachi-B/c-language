#include<stdio.h>
struct student
{
	char name[50];
	int age;
};
//function prototype
void display(struct student s);
void main()
{
	struct student s1;
	printf("enter name:");

	scanf("%s",s1.name);
	printf("enter age:");
	scanf("%d",&s1.age);
	display(s1);
}
void display(struct student s)
{
	printf("\n displaying information \n");
	printf("name: %s",s.name);
	printf("\n age:%d",s.age);
}