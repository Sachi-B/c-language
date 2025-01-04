#include <stdio.h>

int main() {
    float num1, num2, num3, division;
    printf("Division of three numbers\n");

    printf("-------------------------------------------------\n");

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("Enter the third number: ");
    scanf("%f", &num3);

    division = num1 / num2 / num3;
    printf("-------------------------------------------------\n");

    printf("Division of the three numbers: %.2f\n", division);
    printf("-------------------------------------------------\n");

    return 0;
}
