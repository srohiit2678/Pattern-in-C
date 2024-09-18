/*
1 1 1 1 1 
2 2 2 2
3 3 3
4 4
5
*/
#include <stdio.h>

int main()
{
  int n = 5;
  for (int i= 1; i <= n; i++)
  { 
    for (int j = n; j>= i; j--)
    {
      printf("%d ",i);
    }
   
    printf("\n");
  }
}
