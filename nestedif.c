#include<stdio.h>
int main()
{
float salary;
printf("Enter the salary:\n");
scanf("%f",&salary);
if(salary>=50000)
{
salary=salary+(salary*0.15);
printf("salary is %f\n",salary);
}
else if(salary<50000 && salary>30000)
{
salary=salary+(salary*0.1);
printf("salary is %f\n",salary);
}
else if(salary<=30000)
{
salary=salary+(salary*0.05);
printf("salary is %f\n",salary);
}
else{
    printf("salary is %f",salary);
}
}
