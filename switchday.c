#include<stdio.h>
int main()
{
    int day;
    printf("Enter the number of the day:");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
        printf("The entered day is Monday");
        break;
        case 2:
        printf("The entered day is Tuesday");
        break;
        case 3:
        printf("The entered day is Wednesday");
        break;
        case 4:
        printf("The entered day is Thursday");
        break;
        case 5:
        printf("The entered day is Friday");
        break;
        case 6:
        printf("The entered day is Saturday");
        break;
        case 7:
        printf("The entered day is Sunday");
        break;
    }
}