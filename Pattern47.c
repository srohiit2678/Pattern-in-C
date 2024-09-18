/*
 1 
 2  4
 3  6  9
 4  8 12 16       
 5 10 15 20 25 
*/
#include <stdio.h>

int main()
{
  int i, j;
  int n = 5;
  int k=1;
  for (i = 1; i <= n; i++)
  {     k=i;
    for (j = 1; j<= i; j++)
    {
      printf("%2d ", k);
        k+=i;
    }
    printf("\n");
  }
}
