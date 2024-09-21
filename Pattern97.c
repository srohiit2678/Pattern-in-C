// 2 logics
/*
    1
   12
  123
 1234
12345
*/

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
    for (int j =1; j<= i; j++) // for pattern
    { 
        printf("%d",j);
    }    
      printf("\n");   
    }              
  }

/* ------> logic -2 <-------
#include<stdio.h>
int main()
{
  int n = 5,p;
  for (int i=1; i <= n ; i++)
  { 
    for (int j=p =1; j<= n; j++)
    {
      if(j > (n-i))
      {  
        printf("%d",p++);
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