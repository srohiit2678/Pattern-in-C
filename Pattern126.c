/*
  A A A A A      
    B B B B      
      C C C      
        D D      
          E 
*/
#include<stdio.h>
int main()
{
  int n = 5,p=65;
  printf("\n");   
  for (int i=n; i >= 1 ; i--)
  {  
    for (int k=i ;k<=n; k++) // for space
    { 
      printf("  "); 
    }    
    for (int j = i; j>=1; j--) // for pattern
    {    
        printf("%c ",p);
    }    
     printf("\n");p++;
    }              
  }