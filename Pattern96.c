/*

    1
   22
  333
 4444
55555
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
        printf("%d",i);
    }       
       printf("\n");
    }             
     
  }


/* ------> logic -2 <------

#include<stdio.h>
int main()
{
  int n = 5;
  for (int i=1; i <= n ; i++)
  { 
    for (int j =1; j<= n; j++)
    {
      if(j > (n-i))
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
*/
