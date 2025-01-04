#include<stdio.h>

void main()
{
	int x[5];
	int i = 0, position;

	while(i<5)
	{
		printf("Enter the array value: ");
		scanf("%d",&x[i]);
		i++;
	}
	printf("Enter the Index position to display value: ");
	scanf("%d",&position);//position=2
	
	printf("value = %d\n",x[position]);//x[2]
	
}




