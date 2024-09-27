//  2-logics
/*
        E 
      D D        
    C C C        
  B B B B        
A A A A A 
*/

#include <stdio.h>
int main()
{
  int n = 5;
  int p=69;
  for (int i=n; i >= 1 ; i--)
  {    
    for (int j=1; j<= n; j++)
    {
      if(j >= i)
      {  
        printf("%c ",p);
      }     
      else
      {
       printf("  "); 
      }
    }           
     printf("\n");p--;
  }
}


/* ------> logic - 2 <-------

#include<stdio.h>
int main()
{
  int n = 5;
  int p=69;
 
  printf("\n");   
  for (int i=n; i >= 1 ; i--)
  {      
    for (int k=i ;k>1; k--) // for space
    { 
      printf("  "); 
    }    
    for (int j = 1; j<= (n+1)-i; j++) // for pattern
    {    
        printf("%c ",p);
    }    
     printf("\n");  p--;
    }              
  }
*/