/*
                   1
               4   9
          16  25  36
      49  64  81 100
 121 144 169 196 225
*/
#include <stdio.h>
int main()
{
  int n = 5;
  int p = 0, x = 1;   
  for (int i=1; i <= n ; i++)
  { 
    for (int k=1 ;k<=n-i; k++) // for space
    { 
      printf("    "); // 4 spaces
    }    
    for (int j =1; j<= i; j++) // for pattern
    {    p+=x; 
        printf("%4d",p); x+=2;  
    }    
     printf("\n");   
    }              
  }