/*
              1
           1  1       
        1  2  1       
     1  3  3  1       
  1  4  6  4  1 
*/
#include <stdio.h>
int main()
{
  int n = 5;
  int p;   
  for (int i=1; i <= n ; i++)
  { p =1;
    for (int k=1 ;k<=n-i; k++) // for space
    {
      printf("   ");
    }    
    for (int j =1; j<= i; j++) // for pattern
    { 
        printf("%3d",p); 
        p = p*(i-j)/j;
    }    
     printf("\n");   
    }              
  }