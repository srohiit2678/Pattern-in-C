/*

5 5 5 5 5        
 4 4 4 4
  3 3 3
   2 2
    1
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
        printf("%d ",i);
    }    
     printf("\n");
    }              
  }