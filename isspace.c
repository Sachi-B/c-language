#include<stdio.h>
#include<ctype.h>
void main()
{
    char a;
    printf("Enter a character to be checked:");
    scanf("%c",&a);
    if(isspace(a))
    printf("%c is a space",a);
    else
    printf("%c is not a space",a);
}