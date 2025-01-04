#include<stdio.h>
#include<ctype.h>
void main()
{
    char a;
    printf("Enter a character to be checked:");
    scanf("%c",&a);
    if(isalpha(a))
    printf("%c is an alphabet",a);
    else
    printf("%c is not an alphabet",a);
}