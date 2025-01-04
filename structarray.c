#include<stdio.h>
struct student
{
	int rollno;
	char name[10];
	int marks;
};
void main()
{
	int i,n;
	printf("\n enter no of students");
	scanf("%d",&n);
	struct student st[n];
	for(i=0;i<n;i++)
	
	{

		printf("enter records of %d student",i+1);
		printf("\n enter rollno:");
		scanf("%d",&st[i].rollno);
		printf("\n enter name:");
		scanf("%s",st[i].name);
		printf("\nEnter marks for student:");
		scanf("%d",&st[i].marks);
	}
	
	printf("\n students information list");
    for(i=0;i<n;i++)
    {
    	if(st[i].marks>50)
    	{
    	printf("\n rollno=%d,name=%s,marks=%d",st[i].rollno,st[i].name,st[i].marks);
        }
    }

}