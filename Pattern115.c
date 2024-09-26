//  2-logics
/*
        A 
      A B        
    A B C        
  A B C D        
A B C D E  
*/

#include <stdio.h>
int main()
{
  int n = 5;
  int p=65;
  for (int i=n; i >= 1 ; i--)
  {    
    for (int j=1; j<= n; j++)
    {
      if(j >= i)
      {  
        printf("%c ",p++);
      }     
      else
      {
       printf("  "); 
      }
    }           
     printf("\n");p=65;
  }
}


/* ------> logic - 2 <-------

#include<stdio.h>
int main()
{
  int n = 5;
  int p=65;
 
  printf("\n");   
  for (int i=n; i >= 1 ; i--)
  {      
    for (int k=i ;k>1; k--) // for space
    { 
      printf("  "); 
    }    
    for (int j = 1; j<= (n+1)-i; j++) // for pattern
    {    
        printf("%c ",p++);
    }    
     printf("\n");  p=65;
    }              
  }
*/