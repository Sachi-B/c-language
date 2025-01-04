#include<stdio.h>

int main()
{
    char name[100];
    printf("Enter Full Name : ");
    scanf("%[^\n]%*c", name);
    printf("\n%s\n", name);

}