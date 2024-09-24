/*
              1
           2  3  
        4  5  6  
     7  8  9 10  
 11 12 13 14 15 
*/
#include <stdio.h>
int main()
{
  int n = 5;
  int p = 1;  
  for (int i=1; i <= n ; i++)
  { 
    for (int k=1 ;k<=n-i; k++) // for space
    { 
      printf("   "); 
    }    
    for (int j =1; j<= i; j++) // for pattern
    {    
        printf("%3d",p++);   
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
        printf("%3d",p++);
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
