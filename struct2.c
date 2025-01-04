#include<stdio.h>
struct employee
{
    int id;
    char name[50];
    float salary;
    char gender;
};
void main()
{
    struct employee s;
    printf("\nEnter id:" );
    scanf("%d",&s.id);
     printf("\nEnter name:" );
    scanf("%s",s.name);
    printf("\nEnter salary:" );
    scanf("%f",&s.salary);
    printf("\nEnter gender:");
    scanf("%c",&s.gender);
    printf("\nRoll no:%d",s.id);
    printf("\nName:%s",s.name);
    printf("\nSalary:%f",s.salary);
    printf("\nGender:%c",s.gender);
}