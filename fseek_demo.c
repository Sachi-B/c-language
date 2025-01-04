#include<stdio.h>
void main()
{
    FILE*fp;
    fp=fopen("data.txt","w+");
    fputs("abcdefghijklmnopqrstuvwxyz",fp);
    printf("\n FP at fopen=%ld \n",ftell(fp));
    fseek(fp,3,SEEK_SET);
    printf("\n character=%c \n",getc(fp));
    printf("fp at seek set=%ld\n",ftell(fp));
    fseek(fp,3,SEEK_CUR);
    printf("\n character=%c \n",getc(fp));
    printf("fp at seek cur=%ld\n",ftell(fp));
    fseek(fp,-3,SEEK_END);
    printf("\n character=%c \n",getc(fp));
    printf("fp at seek end=%ld\n",ftell(fp));
    fclose(fp);

}