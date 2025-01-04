#include<stdio.h>
void main()
{

int myage=18;   //variabe declaration
int*ptr=&myage; //pointer declaration
//reference:output memory address of myage
printf("%p\n",ptr); //to print hexa decimal pointer address value
printf("%u\n",ptr); //to print unsigned number address value
printf("%x\n",ptr);

//reference:output value  of myage
printf("%d\n",*ptr);

}