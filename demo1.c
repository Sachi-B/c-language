#include<stdio.h>
void main()
{
    FILE*fp;
    fp=fopen("file.txt","w+");
    printf("\n %ld \n",ftell(fp));

    fputs("Integrated Msc(IT)",fp);
    printf("\n %ld \n",ftell(fp));

    fseek(fp,7,SEEK_CUR);
    printf("After seek %ld \n",ftell(fp));

    //pfuts("Advance c",fp);
    //printf("\n %ld",ftell(fp));
    fclose(fp);
    printf("\n");
}