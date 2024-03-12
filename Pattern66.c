#include <stdio.h>

int main()
{
  int n = 5;
  int k;
  for (int i = 1; i <= n; i++)
  {  k=65;
    for (int j = 1; j<= i; j++)
    {
      printf("%c ",k);
        k++;
    }
  
    printf("\n");
  }
}
