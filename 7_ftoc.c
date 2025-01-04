#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    printf("Centigrade to Fahrenheit.\n");
    printf("----------------------------------------------------------\n");
    printf("Enter the temperature in Centigrade: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit * 9 / 5) + 32;
    printf("----------------------------------------------------------\n");
    printf("Temperature in Fahrenheit: %.2f\n", celsius);
    printf("----------------------------------------------------------\n");
    return 0;
}
