#include<stdio.h>
#include<ctype.h>
void main()
{
    char a;
    printf("Enter a character to be checked:");
    scanf("%c",&a);
    if(isalnum(a))
    printf("%c can be printed",a);
    else
    printf("%c cannot be printed",a);
}