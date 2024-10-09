/*

    1
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5  
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
    for (int j = i; j>=1; j--) // for pattern
    {    
        printf("%d ",i);
    }    
     printf("\n");
    }              
  }