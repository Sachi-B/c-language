#include<stdio.h>

int main()
{
	float x[5];
	int pos;
	
	for(pos=0;pos<5;pos++)
	{
		printf("\n enter value for pos %d : ",pos);
		scanf("%f",&x[pos]);
	}
	
	for(pos=0;pos<5;pos++)
	{
		printf("\n\nvalue at pos %d = %.2f",pos,x[pos]);
	}
	return 0;
}