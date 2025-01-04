#include <stdio.h>
void autoStorageClass()
{
	printf("\nDemonstrating auto class\n\n");
	
	auto int a = 32;

	printf("Value of the variable a declared as auto: %d\n",a);

	printf("--------------------------------");
}

int main()
{
	autoStorageClass();
	return 0;
}


