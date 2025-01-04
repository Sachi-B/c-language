#include<stdio.h>
#include<ctype.h>
void main()
{
    char a;
    printf("Enter a punctuation mark to be checked:");
    scanf("%c",&a);
    if(ispunct(a))
    printf("%c is a punctuation mark",a);
    else
    printf("%c is not a punctuation mark",a);
}