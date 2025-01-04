#include <stdio.h>

int main() {
    float base, height, area;
    printf("Area of Triangle\n");
    printf("-------------------------------------------------\n");
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);
    area = 0.5 * base * height;
    printf("-------------------------------------------------\n");
    printf("Area of the triangle: %.2f\n", area);
    printf("-------------------------------------------------\n");
    return 0;
}
