#include<stdio.h>

int main()
{
    float a, b ,c ,d ,e , ans;
    printf("Solving the Equation\n");
    printf("Enter value of a : ");
    scanf("%f",&a);
    printf("Enter value of b : ");
    scanf("%f",&b);
    printf("Enter value of c : ");
    scanf("%f",&c);
    printf("Enter value of d : ");
    scanf("%f",&d);
    printf("Enter value of e : ");
    scanf("%f",&e);
    ans=(a+b*c)/(d+e);
    printf("Answer after putting the value in equation x=(a+b*c)/(d+e) is %.2f\n",ans);
    return 0;

}