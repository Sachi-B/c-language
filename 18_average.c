#include <stdio.h>

int main() {
    int subject1, subject2, subject3, subject4, subject5;
    float totalMarks, percentage;
    printf("Average of five number\n");
    printf("-------------------------------------------------\n");
    printf("Enter a number: ");
    scanf("%d", &subject1);
    printf("Enter a number: ");
    scanf("%d", &subject2);
    printf("Enter a number: ");
    scanf("%d", &subject3);
    printf("Enter a number: ");
    scanf("%d", &subject4);
    printf("Enter a number: ");
    scanf("%d", &subject5);
    totalMarks = subject1 + subject2 + subject3 + subject4 + subject5;
    percentage = (totalMarks / 5);
    printf("-------------------------------------------------\n");
    printf("Average: %.2f\n", percentage);
    printf("-------------------------------------------------\n");
    return 0;
}
