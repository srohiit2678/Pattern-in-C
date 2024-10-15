/*

    1
   333
  55555
 7777777
999999999  
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
        printf("%d",i);
    }    
     printf("\n");
    }              
  }