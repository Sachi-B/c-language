#include <stdio.h>

int main() {
    float length, width, perimeter;
    printf("Perimeter of Rectangle\n");
    printf("-------------------------------------------------\n");
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);
    perimeter = 2 * (length + width);
    printf("-------------------------------------------------\n");
    printf("Perimeter of the rectangle: %.2f\n", perimeter);
    printf("-------------------------------------------------\n");
    return 0;
}
