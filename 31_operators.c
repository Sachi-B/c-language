#include<stdio.h>

int main()
{
    float a,b,c;
    printf("Enter value of a : ");
    scanf("%f",&a);
    printf("Enter value of b : ");
    scanf("%f",&b);
    printf("Enter value of c : ");
    scanf("%f",&c);
    
    printf("Arithmetic Operators\n");
    
    printf("The addition of %.2f and %.2f is %.2f\n",a,b,(a+b));
    printf("The substration of %.2f and %.2f is %.2f\n",a,b,(a-b));
    printf("The multiplication of %.2f and %.2f is %.2f\n",a,b,(a*b));
    printf("The division of %.2f and %.2f is %.2f\n",a,b,(a/b));
    printf("The modulo of %.2f and %.2f is %d\n",a,b,((int)a % (int)b));
   
    printf("Relational Operators\n");
   
    printf("a == b : %ld\n",a == b);
    printf("a < b : %ld\n",a < b);
    printf("a > b : %ld\n",a > b);
    printf("a != b : %ld\n",a != b);
    printf("a >= b : %ld\n",a >= b);
    printf("a <= b : %ld\n",a <= b);
    
    printf("Logical Operators\n");
    
    int result = (a == b) && (c > b);
    printf("(a == b) && (c > b) : %d \n", result);
    result = (a == b) && (c < b);
    printf("(a == b) && (c < b) : %d \n", result);
    result = (a == b) || (c < b);
    printf("(a == b) || (c < b) : %d \n", result);
    result = (a != b) || (c < b);
    printf("(a != b) || (c < b) : %d \n", result);
    result = !(a != b);
    printf("!(a != b) : %d \n", result);
    result = !(a == b);
    printf("!(a == b) : %d \n", result);
    
    printf("Assignment Operators\n");
    int a1,a2,a3;
    printf("Enter value of a : ");
    scanf("%d",&a1);
    printf("Enter value of b : ");
    scanf("%d",&a2);
    printf("Enter value of c : ");
    scanf("%d",&a3);
    a3 = a1;  
    printf("c = %d\n", a3);
    a3 += a1;  
    printf("c += %d\n", a3);
    a3 -= a1;
    printf("c -= %d\n", a3);
    a3 *= a1;
    printf("c *= %d\n", a3);
    a3 /= a1;
    printf("c /= %d\n", a3);
    printf("Conditional Operators\n");
    (a1 > a2) ? printf("a is greater than b that is %d > %d\n",a1, a2): printf("a is greater than b that is %d > %d\n",a1, a2);
    printf("Special/Misc Operators\n");
    printf("Size of variable a : %d\n", sizeof(a1) );
    printf("Address of variable a : %d\n", &a);
    return 0;
}