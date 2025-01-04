/*Create a c program which will take character from user and find out
 whether it is uppercase or lower case and convert it into viceversa*/
#include<stdio.h>
#include<ctype.h>
void main()
{
    char a;
    printf("Enter an alphabet:");
    scanf("%c",&a);
    if(islower(a))
    printf("The upperr is %c",toupper(a));
    else
    printf("The lower is %c",tolower(a));
}