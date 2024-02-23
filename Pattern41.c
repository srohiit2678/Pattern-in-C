#include <stdio.h>

int main()
{
  int i, j;
  int n = 5;
  int k=1;
  for (i = 1; i <= n; i++)
  {
    for (j =1; j<=i; j++)
    {
      printf("%2d ", k++);
    }
    printf("\n");
  }
}
