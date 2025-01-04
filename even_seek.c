#include<stdio.h>
void main()
{
    FILE*fp;
    fp=fopen("data.txt","w+");
    fputs("abcdefghijklmnopqrstuvwxyz",fp);
    printf("\n FP at fopen:%ld\n",ftell(fp));
    int i;
    long size;
    size=ftell(fp);
    for(i=0;i<size;i++)
    {
        fseek(fp,i,SEEK_SET);
        
        printf("\n character:%c\n",getc(fp));
    }
}