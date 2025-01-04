//reverse the file content from the file.
#include<stdio.h>
void main()
{
	FILE*fp;
	char str[50];
	fp=fopen("reverse.txt","w+");
	printf("Enter the string:");
	gets(str);
	fputs(str,fp);
	ftell(fp);
	printf("\nFp at open:%ld",ftell(fp));
	rewind(fp);
	printf("\nFp at rewind:%c",getc(fp));
	fclose(fp);
}