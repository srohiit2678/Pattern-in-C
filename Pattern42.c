/*
 1 
 2  3
 3  4  5
 4  5  6  7       
 5  6  7  8  9 
*/
#include <stdio.h>

int main()
{
  int i, j;
  int n = 5;
  int k;
  for (i = 1; i <= n; i++)
  {     k =i;
    for (j =1; j<=i; j++)
    {
      printf("%2d ", k++);
    }
    printf("\n");
  }
}
