#include <stdio.h>

int main() {
    int num1, num2;
    printf("Swap of Two Number\n");
    printf("-------------------------------------------------\n");
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("-------------------------------------------------\n");
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    printf("-------------------------------------------------\n");

    int temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
    printf("-------------------------------------------------\n");

    return 0;
}
