#include<stdio.h>
#include<ctype.h>
void main()
{
    char a;
    printf("Enter a character to be checked:");
    scanf("%c",&a);
    if(islower(a))
    printf("%c is lower alphabet",a);
    else
    printf("%c is not lower alphabet",a);
}