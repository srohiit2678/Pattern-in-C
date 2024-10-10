/*
    A
   B B
  C C C
 D D D D
E E E E E 
*/
#include<stdio.h>
int main()
{
  int n = 5;
  printf("\n");   
  for (int i=1; i <= n ; i++)
  {  
    for (int k=i ;k<n; k++) // for space
    {
      printf(" "); 
    }    
    for (int j = 1; j<=i; j++) // for pattern
    {    
        printf("%c ",i+64);
    }    
     printf("\n");
    }              
  }