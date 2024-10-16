/*

     5
    444
   33333
  2222222        
 111111111   
*/
#include<stdio.h>
int main()
{
  int n = 5;
  printf("\n");   
  for (int i=n; i >= 1 ; i--)
  {  
    for (int k=i ;k>=1; k--) // for space
    {
      printf(" "); 
    }    
    for (int j = 2*n; j>=2*i; j--) // for pattern
    {    
        printf("%d",i);
    }    
     printf("\n");
    }              
  }