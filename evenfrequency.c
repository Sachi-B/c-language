#include <stdio.h>
 int main()
#define MAXROW      10
#define MAXCOL      10
 

{
    int matrix[MAXROW][MAXCOL];
    int i,j,r,c;
     
    printf("Enter number of Rows :");
    scanf("%d",&r);
    printf("Enter number of Cols :");
    scanf("%d",&c);
 
    printf("\nEnter matrix elements :\n");
    for(i=0;i< r;i++)
    {
        for(j=0;j< c;j++)
        {
            printf("Enter element [%d,%d] : ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
 
    printf("\nMatrix is :\n");
    for(i=0;i< r;i++)
    {
        for(j=0;j< c;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");   /*new line after row elements*/
    }
    int EvenFrequency = 0;

    
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            if (matrix[i][j] % 2 == 0)
                EvenFrequency++;
            
        }
        
    }

    printf("Frequency of EVEN numbers is: %d\n", EvenFrequency);

   

    return 0;   
}
