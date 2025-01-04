#include<stdio.h>

int main()
{
    float PI=3.14,r,vol; 
    printf("Circumference of circle\n");
    printf("Enter the radius of circle : ");
    scanf("%f",&r);
    vol = 2*PI*r;
    printf("Circumference of circle is %.2f\n",vol);
    return 0;
}