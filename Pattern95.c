/*
    *
   **
  ***
 ****
*****
*/

// 2 logics
#include <stdio.h>
int main()
{
  int n = 5;
  for (int i=1; i <= n ; i++)
  { 
    for (int k=1 ;k<=n-i; k++) // for space
    {
      printf(" ");
    }    
    for (int j =1; j<= i; j++) // for star pattern
    { 
        printf("*");
    }      
       printf("\n"); 
    }             
     
  }




/* ---> logic -2 <----

int main()
{
  int n = 5;
  for (int i=1; i <= n ; i++)
  { 
    for (int j =1; j<= n; j++)
    {
      if(j > (n-i))
      {  
        printf("*");
      }     
      else
      {
        printf(" ");
      }
    }             
     printf("\n");
  }
}
*/
