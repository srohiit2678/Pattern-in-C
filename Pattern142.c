/*

    1
   123
  12345
 1234567
123456789 
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
    for (int j = 1; j<=i; j++) // for pattern
    {    
        printf("%d",j);
    }    
     printf("\n");
    }              
  }