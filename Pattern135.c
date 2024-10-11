/*

5 4 3 2 1        
 4 3 2 1
  3 2 1
   2 1
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
    for (int j = i; j>=1; j--) // for pattern
    {    
        printf("%d ",j);
    }    
     printf("\n");
    }              
  }