#include<stdio.h>
struct student
{
	int rollno;
	char name[50];
	struct dob 

	{
	int day;
	char month[50];
	int year;
	
}d;
};
void main()
{
	struct student s;
	int current_year=2024,age;
	printf("\n enter rollno ");
	scanf("%d",&s.rollno);
	printf("\n enter name");
	scanf("%s",s.name);
	printf("\n enter date");
	scanf("%d",&s.d.day);
	printf("\n enter month name");
	scanf("%s",s.d.month);
	printf("\n enter year");
	scanf("%d",&s.d.year);
	age=current_year-s.d.year;
	printf("\n rollno%d\n",s.rollno);
	printf("\n name %s\n",s.name);
	printf("\n date %d-%s-%d \n",s.d.day,s.d.month,s.d.year);
	printf("age=%d",age);
	if(age>=18)
	{
		printf("Eligible to vote");
	}
else
{
	printf("Not eligible");
}
}