/*
 1  0  1  0  1 
 0  1  0  1       
 1  0  1
 0  1
 1
*/
#include <stdio.h>

int main()
{
  int n = 5;
  int p;
  for (int i=1; i <= n ; i++)
  {  p=i;
    for (int j =n; j>= i; j--)
    {  
      printf("%2d ",p%2);
      p++;
    }                  
     printf("\n");
  }
}
