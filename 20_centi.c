#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    printf("Centigrade to Fahrenheit.\n");
    printf("----------------------------------------------------------\n");
    printf("Enter the temperature in Centigrade: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("----------------------------------------------------------\n");
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    printf("----------------------------------------------------------\n");
    printf("Fahrenheit to Centigrade.\n");
    printf("----------------------------------------------------------\n");
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("----------------------------------------------------------\n");
    printf("Temperature in Celsius: %.2f\n", celsius);
    printf("----------------------------------------------------------\n");
    return 0;
}
