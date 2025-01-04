#include<stdio.h>
void main()
{
    FILE*fp;
    fp=fopen("myfile.txt","w");
    fputs("Hello World",fp);
    //fseek(fp,6,SEEK_SET);
   fputs("India",fp);
    fclose(fp);
}