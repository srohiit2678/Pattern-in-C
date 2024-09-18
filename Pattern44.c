/*
 1 
 3  2
 6  5  4
10  9  8  7       
15 14 13 12 11 
*/
#include <stdio.h>

int main()
{
  int i, j;
  int n = 5;
  int k=0;
  for (i = 1; i <= 2*n; i++,i++)
  {       k+=i;
    for (j = 1; j<= i; j++,j++)
    {
      printf("%2d ", k--);
    }
    printf("\n");
  }
}
