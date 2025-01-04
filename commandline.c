#include<stdio.h>
void main(int argc,char* argv[])
{
	printf("you have entered %d arguments:\n",argc);
	for(int i = 0;i < argc;i ++)
	{
	printf("%s \n",argv[i]);
	}
}