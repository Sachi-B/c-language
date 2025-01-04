#include<stdio.h>
#include<ctype.h>
void main()
{
    char a;
    printf("Enter a character to be checked:");
    scanf("%c",&a);
    if(isalnum(a))
    printf("%c is an alphanumeric variable",a);
    else
    printf("%c is not an alphanumeric",a);
}