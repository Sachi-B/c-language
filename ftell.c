#include<stdio.h>
void main()
{
    FILE*fp=fopen("test.txt","w");
    fputs("this is a programming in c",fp);
    printf("%ld",ftell(fp));
    rewind(fp);
    printf("\nrewind %ld\n",ftell(fp));
}