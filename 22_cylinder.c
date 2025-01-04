#include<stdio.h>

int main()
{
    float PI=3.14,r,h,vol; 
    printf("Volume of Cylinder\n");
    printf("Enter the radius of cylinder : ");
    scanf("%f",&r);
    printf("Enter the height of cylinder : ");
    scanf("%f",&h);
    vol = PI * (r * r) * h ;
    printf("Volume of cylinder is %.2f\n",vol);
    return 0;
}