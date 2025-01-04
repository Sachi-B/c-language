#include <stdio.h>
void staticStorageClass()
{
	int i;

	printf("\nDemonstrating static class\n\n");

	// using a static variable 'y'
	printf("Declaring 'y' as static inside the loop.\n"
		"But this declaration will occur only"
		" once as 'y' is static.\n"
		"If not, then every time the value of 'y' "
		"will be the declared value 5"
		" as in the case of variable 'p'\n");

	printf("\nLoop started:\n");

	for (i = 1; i < 5; i++) {

		// Declaring the static variable 'y'
		static int y = 5;

		// Declare a non-static variable 'p'
		int p = 10;

		// Incrementing the value of y and p by 1
		y++;
		p++;

		// printing value of y at each iteration
		printf("\nThe value of 'y', "
			"declared as static, in %d "
			"iteration is %d\n",
			i, y);

		// printing value of p at each iteration
		printf("The value of non-static variable 'p', "
			"in %d iteration is %d\n",
			i, p);
	}

	printf("\nLoop ended:\n");

	printf("--------------------------------");
}


int main()
{
	staticStorageClass();
	return 0;
}