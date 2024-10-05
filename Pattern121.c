/*

  1 1 1 1 1      
    2 2 2 2      
      3 3 3      
        4 4      
          5  
*/
#include<stdio.h>
int main()
{
  int n = 5,p;
  printf("\n");   
  for (int i=1; i <= n ; i++)
  {      p=i;
    for (int k=1 ;k<=i; k++) // for space
    { 
      printf("  "); 
    }    
    for (int j = 1; j<= (n+1)-i; j++) // for pattern
    {    
        printf("%d ",p);
    }    
     printf("\n");
    }              
  }