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
  int n = 5,p;
  printf("\n");   
  for (int i=n; i >= 1 ; i--)
  {  p=65;
    for (int k=i ;k<=n; k++) // for space
    { 
      printf("  "); 
    }    
    for (int j = i; j>=1; j--) // for pattern
    {    
        printf("%c ",p++);
    }    
     printf("\n");
    }              
  }