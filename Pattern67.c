/*
E 
E D
E D C
E D C B
E D C B A
*/
#include <stdio.h>

int main()
{
  int n = 5;
  int k;
  for (int i = 1; i <= n; i++)
  {  k=64+n;
    for (int j = 1; j<= i; j++)
    {
      printf("%c ",k);
        k--;
    }
  
    printf("\n");
  }
}
