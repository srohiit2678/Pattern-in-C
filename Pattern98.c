// 2 logics 
/*
    5
   44
  333
 2222
11111
*/

#include<stdio.h>
int main()
{
  int n = 5;
  for (int i=n; i >= 1 ; i--)
  { 
    for (int j=1; j<= n; j++)
    {
      if(j >= i)
      {  
        printf("%d",i);
      }     
      else
      {
        printf(" ");
      }
    }             
     printf("\n");
  }
}





/* ------> logic - 2 <-------

#include <stdio.h>
int main()
{
  int n = 5 ;
  int p = n;
  for (int i=1; i <= n ; i++)
  {  
    for (int k=1 ;k<=n-i; k++) // for space
    {
      printf(" ");
    }    
    for (int j =1; j<= i; j++) // for star pattern
    { 
        printf("%d",p);
    }    
     p--;
     printf("\n");   
    }              
  }

*/
