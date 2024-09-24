// 2 logics 

/*
              1   
           2  4   
        3  6  9   
     4  8 12 16   
  5 10 15 20 25 
*/

#include <stdio.h>
int main()
{
  int n = 5;
  int p;   
  for (int i=1; i <= n ; i++)
  { p =1;
    for (int k=1 ;k<=n-i; k++) // for space
    {
      printf("   ");
    }    
    for (int j =i; j>= 1; j--) // for pattern
    { 
        printf("%3d",i*p++); 
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
  {    p=1;
    for (int j=1; j<= n; j++)
    {
      if(j >= i)
      {  
        printf("%3d",p*(n-i+1));  p++; 
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
