#include<stdio.h>
void open(char filename[]);//function declaration
void main()
{
    char filename[25];
    printf("Enter name of file:");
    scanf("%s",filename);
    open(filename);//function calling
}
void open(char filename[])//function create
{
    FILE*fp=fopen(filename,"w");
    fputs("hello",fp);
    fclose(fp);
}