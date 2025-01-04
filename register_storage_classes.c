#include <stdio.h>
void registerStorageClass()
{
	register char b = 'G';
	printf("\n value of b=%c",b);
}

int main()
{
	registerStorageClass();
	return 0;
}
