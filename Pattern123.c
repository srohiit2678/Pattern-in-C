/*
    1  2  3  4  5

       5  6  7  8

          8  9 10

            10 11

               11

*/
#include<stdio.h>
int main()
{
  int n = 5,p=1;
  printf("\n");   
  for (int i=n; i >= 1 ; i--)
  {  
    for (int k=i ;k<=n; k++) // for space
    { 
      printf("   "); 
    }    
    for (int j = i; j>=1; j--) // for pattern
    {    
        printf("%2d ",p++);
    }    
     printf("\n");p--;
    }              
  }