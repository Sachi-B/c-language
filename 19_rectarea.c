#include <stdio.h>

int main() {
    int length, width, area;
    printf("Area of Rectangle\n");
    printf("----------------------------------\n");
    printf("Enter the length: ");
    scanf("%d", &length);
    printf("Enter the width: ");
    scanf("%d", &width);
    area = length* width;
    printf("----------------------------------\n");
    printf("The area of the rectangle is: %d\n", area);
    printf("----------------------------------\n");
    return 0;
}
