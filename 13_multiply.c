#include <stdio.h>

int main() {
    int num1, num2, product;
    printf("Multiplication of two numbers\n");

    printf("-------------------------------------------------\n");

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    product = num1 * num2;
    printf("-------------------------------------------------\n");

    printf("Multiplication of the two numbers: %d\n", product);
    printf("-------------------------------------------------\n");

    return 0;
}
