/*
A B C D E        
 A B C D
  A B C
   A B
    A
*/
#include<stdio.h>
int main()
{
  int n = 5;
  printf("\n");   
  for (int i=n; i >= 1 ; i--)
  {  
    for (int k=n ;k>i; k--) // for space
    {
      printf(" "); 
    }    
    for (int j = 1; j<=i; j++) // for pattern
    {    
        printf("%c ",j+64);
    }    
     printf("\n");
    }              
  }