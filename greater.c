#include<stdio.h>

void main()
{
    int roll;
    char g;
    float marks;

    printf("\nEnter your roll number: ");
    scanf("%d", &roll);

    // Adding a space before %c in scanf to ignore any leftover newline character
    printf("\nEnter your gender - M for male and F for female: ");
    scanf(" %c", &g);

    printf("\nEnter your marks: ");
    scanf("%f", &marks);

    int *ptr1 = &roll;
    char *ptr2 = &g;
    float *ptr3 = &marks;

    printf("\nRoll no.: %d", *ptr1);
    printf("\nGender: %c", *ptr2);
    printf("\nMarks: %f", *ptr3);
}
