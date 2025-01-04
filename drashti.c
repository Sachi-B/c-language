#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
	FILE*fp;
	char s[30];
	fp=fopen("a5.txt","w+");
	printf("Enter string:");
    gets(s);
    fwrite(s,strlen(s),1,fp);
    fseek(fp,0,SEEK_SET);
    fread(s,strlen(s),1,fp);
	char ch;
	while(ch=getc(fp)!=EOF)
	{
		if(islower(ch))
		{
			printf("\n%s",s);
		}
	}
	fclose(fp);
}