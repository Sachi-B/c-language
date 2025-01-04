#include<stdio.h>
void main()
{
    FILE*fp,*fp1;
    fp=fopen("data.txt","w+");
    fp1=fopen("consonant.txt","w+");
    fputs("abcdefghijklmnopqrstuvwxyz",fp);
    //printf("\n FP at fopen:%ld\n",ftell(fp));
    int i;
    char ch;
   
    long size;
    size=ftell(fp);
    for(i=0;i<size;i++)
    {
         ch=getc(fp);
        fseek(fp,i,SEEK_SET);
        if(ch!='a'&&ch!='e'&&ch!='i'&&ch!='o'&&ch!='u')
        fprintf(fp1,"%c\n",ch);
    }
}