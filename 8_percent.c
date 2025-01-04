#include <stdio.h>

int main() {
    int subject1, subject2, subject3, subject4, subject5;
    float totalMarks, percentage;

    printf("Percentage Calculator(Total Marks = 100)\n");
    printf("-------------------------------------------------\n");
    printf("Enter the marks for subject 1: ");
    scanf("%d", &subject1);

    printf("Enter the marks for subject 2: ");
    scanf("%d", &subject2);

    printf("Enter the marks for subject 3: ");
    scanf("%d", &subject3);

    printf("Enter the marks for subject 4: ");
    scanf("%d", &subject4);

    printf("Enter the marks for subject 5: ");
    scanf("%d", &subject5);

    totalMarks = subject1 + subject2 + subject3 + subject4 + subject5;
    percentage = (totalMarks / 500) * 100;

    printf("-------------------------------------------------\n");
    printf("Total marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);
    printf("-------------------------------------------------\n");

    return 0;
}
