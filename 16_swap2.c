#include <stdio.h>

int main() {
    int num1, num2;
    printf("Swap of Two Variable\n");
    printf("-------------------------------------------------\n");
    printf("Enter the value for 1st Variable: ");
    scanf("%d", &num1);
    printf("Enter the value for 2nd Variable: ");
    scanf("%d", &num2);
    printf("-------------------------------------------------\n");
    printf("Before swapping: variable_1 = %d, variable_2 = %d\n", num1, num2);
    printf("-------------------------------------------------\n");

    int temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After swapping: variable_1 = %d, variable_2 = %d\n", num1, num2);
    printf("-------------------------------------------------\n");

    return 0;
}
