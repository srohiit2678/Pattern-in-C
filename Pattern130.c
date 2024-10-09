/*

    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5 
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
        printf("%d ",j);
    }    
     printf("\n");
    }              
  }