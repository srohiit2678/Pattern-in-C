// 2 logics 

/*
              1
           3  5   
        7  9 11   
    13 15 17 19   
 21 23 25 27 29
*/

#include <stdio.h>
int main()
{
  int n = 5;
  int p =1;   
  for (int i=1; i <= n ; i++)
  { 
    for (int k=1 ;k<=n-i; k++) // for space
    {
      printf("   ");
    }    
    for (int j =i; j>= 1; j--) // for pattern
    { 
        printf("%3d",p);  p+=2;
    }    
     printf("\n");   
    }              
  }





/* ------> logic - 2 <-------

#include<stdio.h>
int main()
{
  int n = 5;
  int p=1;
  for (int i=n; i >= 1 ; i--)
  {    
    for (int j=1; j<= n; j++)
    {
      if(j >= i)
      {  
        printf("%3d",p); p+=2;
      }     
      else
      {
       printf("   "); 
      }
    }             
     printf("\n");
  }
}

*/
