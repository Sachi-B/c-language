/*create a menu driven program for files in which for user enters 1 it will print all the odd numbers position charater
create a file and write some data into it such as abcd and then perform

if user eneters 2 all even position charaters

if user enters 3 print the length of the file

when user enters 4 print all the vowels of the file to another file named vowel.txt

when user enters 5 print all the consonants of the file to another file named consonant.txt*/
#include<stdio.h>
void main()
{
    char name[20];
    FILE*fp;
    fp=fopen("alpha.txt","r");
    long size;
    fseek(fp,0,SEEK_END);
   size=ftell(fp);
    printf("%ld",size);

}