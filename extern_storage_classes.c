#include <stdio.h>
int a=12;
void externStorageClass()
{
	extern int a;
	printf("\nValue of the variable a: %d\n",a);
	
	a = 32;
	printf("\nValue of the variable a: %d\n",a);
	
	
}
void abc()
{
	printf("\nValue of the variable a: %d\n",a);
}

int main()
{
	externStorageClass();
	abc();
	return 0;
}
