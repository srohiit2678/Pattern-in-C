/*

    1
   321
  54321
 7654321
987654321   
*/
#include<stdio.h>
int main()
{
  int n = 5;
  printf("\n");   
  for (int i=1; i < 2*n ; i+=2)
  {  
    for (int k=2*n-1 ;k>i; k-=2) // for space
    {
      printf(" "); 
    }    
    for (int j = i; j>=1; j--) // for pattern
    {    
        printf("%d",j);
    }    
     printf("\n");
    }              
  }