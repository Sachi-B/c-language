#include <stdio.h>  
#include <string.h>  
   
int main()  
{  
    char string[100];  
    printf("Enter a string:");
    scanf("%s",string);
          
    
    printf("Individual characters from given string:\n");  
      
    
    for(int i = 0; i < strlen(string); i++)
    {  
        printf("%c ", string[i]);  
    }  
          
    return 0;  
}  