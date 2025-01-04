#include<stdio.h>
void open(char filename[]);
void main()
{
    char filename[25];
    printf("Enter name of file:");
    scanf("%s",filename);
    open(filename);
}
void open(char filename[])
{
    FILE*fp=fopen(filename,"w");
    fputs("hello",fp);
    fclose(fp);
}