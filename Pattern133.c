/*

* * * * *        
 * * * *
  * * *
   * *
    *
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
        printf("* ");
    }    
     printf("\n");
    }              
  }