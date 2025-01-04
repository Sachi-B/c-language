#include<stdio.h>
#include<ctype.h>
void main()
{
    char a;
    printf("Enter a character to be checked:");
    scanf("%c",&a);
    if(isupper(a))
    printf("%c is upper alphabet",a);
    else
    printf("%c is not upper alphabet",a);
}