/*

E D C B A        
 D C B A
  C B A
   B A
    A
*/
#include<stdio.h>
int main()
{
  int n = 5;
  printf("\n");   
  for (int i=1; i <= n ; i++)
  {  
    for (int k=1 ;k<i; k++) // for space
    {
      printf(" "); 
    }    
    for (int j = i; j<=n; j++) // for pattern
    {    
        printf("%c ",70-j);
    }    
     printf("\n");
    }              
  }