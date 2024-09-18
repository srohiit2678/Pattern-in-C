/*
5 
4 5
3 4 5
2 3 4 5
1 2 3 4 5
*/
#include <stdio.h>

int main()
{
  int i, j;
  int n = 5;
  for (i = n; i >= 1; i--)
  {
    for (j = i; j <= 5; j++)
    {
      printf("%d ", j);
    }
    printf("\n");
  }
}
