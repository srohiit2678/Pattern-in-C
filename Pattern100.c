// 2 logics 
/*
    1
   21
  321
 4321
54321
*/


#include <stdio.h>
int main()
{
  int n = 5 ;

  for (int i=1; i <= n ; i++)
  { 
    for (int k=1 ;k<=n-i; k++) // for space
    {
      printf(" ");
    }    
    for (int j =i; j>= 1; j--) // for pattern
    { 
        printf("%d",j);
    }    
     printf("\n");   
    }              
  }





/* ------> logic - 2 <-------

#include<stdio.h>
int main()
{
  int n = 5;
  int p;
  for (int i=n; i >= 1 ; i--)
  {     p = n;
    for (int j=1; j<= n; j++)
    {
      if(j >= i)
      {  
        printf("%d",p);
      }     
      else
      {
       printf(" "); 
      }
      p--;
    }             
     printf("\n");
  }
}

*/