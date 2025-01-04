/*take a string from the user and print its length
use for loop*/
#include<stdio.h>
void main()
{
    int i,length=0;
    char str[100];
    printf("Enter a string:");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        length++;
    }
    printf("Length of string:%d",length);
}