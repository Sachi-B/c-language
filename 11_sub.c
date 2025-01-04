#include <stdio.h>

int main() {
    int num1, num2, num3, sum;
    printf("Substraction of two Numbers\n");
    printf("-------------------------------------------------\n");
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    sum = num1 - num2;

    printf("-------------------------------------------------\n");
    printf("Subtraction of the two numbers: %d\n", sum);
    printf("-------------------------------------------------\n");

    return 0;
}
