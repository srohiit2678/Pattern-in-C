//  2-logics
/*
        A 
      B A        
    C B A        
  D C B A        
E D C B A 
*/

#include <stdio.h>
int main()
{
  int n = 5;
  int p=70;
  for (int i=n; i >= 1 ; i--)
  {     p-=i;
    for (int j=1; j<= n; j++)
    {
      if(j >= i)
      {  
        printf("%c ",p--);
      }     
      else
      {
       printf("  "); 
      }
    }           
     printf("\n");p=70;
  }
}


/* ------> logic - 2 <-------

#include<stdio.h>
int main()
{
  int n = 5;
  int p=70;
 
  printf("\n");   
  for (int i=n; i >= 1 ; i--)
  {      p-=i;
    for (int k=i ;k>1; k--) // for space
    { 
      printf("  "); 
    }    
    for (int j = 1; j<= (n+1)-i; j++) // for pattern
    {    
        printf("%c ",p--);
    }    
     printf("\n");  p=70;
    }              
  }
*/