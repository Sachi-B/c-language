#include<stdio.h>
#include<string.h>
void main()
{
    FILE*fp;
    char c[100];
    /*open file for both reading and writing*/
    fp=fopen("fread_write.txt","w+");
    printf("Enter string:");
    gets(c);
    /*write data to the file*/
    fwrite(c,strlen(c),1,fp);
    /*seek to the beginning of the file*/
    fseek(fp,0,SEEK_SET);
    /*read and display data*/
    fread(c,strlen(c),1,fp);
    printf("%s\n",c);
    fclose(fp);
}