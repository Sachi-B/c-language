#include<stdio.h>
#include<ctype.h>
void main()
{
    char a;
    printf("Enter a character to be checked:");
    scanf("%c",&a);
    if(isdigit(a))
    printf("%c is a digit",a);
    else
    printf("%c is not digit",a);
}