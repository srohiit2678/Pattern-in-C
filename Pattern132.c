/*

    A
   A B
  A B C
 A B C D
A B C D E  
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
        printf("%c ",j+64);
    }    
     printf("\n");
    }              
  }