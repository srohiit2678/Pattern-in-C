/*
2 
2 4
2 4 6
2 4 6 8 
2 4 6 8 10  
*/
#include <stdio.h>

int main()
{
  int i, j;
  int n = 5;
  for (i = 1; i <= n; i++)
  {
    for (j =1; j<=i; j++)
    {
      printf("%d ", 2*j);
    }
    printf("\n");
  }
}
