// 2 logics 

/*
              2
           4  6   
        8 10 12   
    14 16 18 20   
 22 24 26 28 30 
*/

#include <stdio.h>
int main()
{
  int n = 5;
  int p =0;   
  for (int i=1; i <= n ; i++)
  { 
    for (int k=1 ;k<=n-i; k++) // for space
    {
      printf("   ");
    }    
    for (int j =i; j>= 1; j--) // for pattern
    { 
        printf("%3d",p+=2);
    }    
     printf("\n");   
    }              
  }





/* ------> logic - 2 <-------

#include<stdio.h>
int main()
{
  int n = 5;
  int p=0;
  for (int i=n; i >= 1 ; i--)
  {    
    for (int j=1; j<= n; j++)
    {
      if(j >= i)
      {  
        printf("%3d",p+=2);
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
