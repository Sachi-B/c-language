#include <stdio.h>

int main() {
    int principal, rate, time, simpleInterest;
    printf("Simple Intrest\n");
    printf("-------------------------------------\n");
    printf("Enter the principal amount: ");
    scanf("%d", &principal);
    printf("Enter the rate of interest (in percentage): ");
    scanf("%d", &rate);
    printf("Enter the time period (in years): ");
    scanf("%d", &time);
    simpleInterest = (principal * rate * time) / 100.0;
    printf("-------------------------------------\n");
    printf("Simple Interest: %d\n", simpleInterest);
    printf("-------------------------------------\n");
    return 0;
}
