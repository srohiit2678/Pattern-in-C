/*
 0  1  0  1  0 
 0  1  0  1       
 0  1  0
 0  1
 0
*/
#include <stdio.h>

int main()
{
  int n = 5;
  for (int i=n; i >= 1 ; i--)
  {  
    for (int j =0; j< i; j++)
    {  
      printf("%2d ",j%2);
    }                  
     printf("\n");
  }
}
