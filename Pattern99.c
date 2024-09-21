// 2 logics 
/*
    5
   45
  345
 2345
12345
*/


#include <stdio.h>
int main()
{
  int n = 5 ;
  int p;
  for (int i=1; i <= n ; i++)
  {  p = n+1-i;
    for (int k=1 ;k<=n-i; k++) // for space
    {
      printf(" ");
    }    
    for (int j =1; j<= i; j++) // for pattern
    { 
        printf("%d",p++);
    }    
     printf("\n");   
    }              
  }





/* ------> logic - 2 <-------

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
        printf("%d",j);
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
