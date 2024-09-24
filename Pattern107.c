/*
             15
          14 13  
       12 11 10  
     9  8  7  6  
  5  4  3  2  1
*/
#include <stdio.h>
int main()
{
  int n = 5;
  int p=(n*(n+1))/2; 
  for (int i=1; i <= n ; i++)
  { 
    for (int k=1 ;k<=n-i; k++) // for space
    { 
      printf("   "); 
    }    
    for (int j =1; j<= i; j++) // for pattern
    {    
        printf("%3d",p--);   
    }    
     printf("\n");   
    }              
  }


/* ------> logic - 2 <-------

#include<stdio.h>
int main()
{
  int n = 5;
  int p=(n*(n+1))/2;
  for (int i=n; i >= 1 ; i--)
  {     
    for (int j=1; j<= n; j++)
    {
      if(j >= i)
      {  
        printf("%3d",p--);
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
