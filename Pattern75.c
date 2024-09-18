/*
5 4 3 2 1 
6 5 4 3
7 6 5
8 7
9
*/
#include <stdio.h>

int main()
{
  int n = 5;
  int p=5;
  for (int i= n; i >=1 ; i--)
  { 
    for (int j = 0; j<=i-1; j++)
    {
      printf("%d ",p-j);
    }
     p++;
    printf("\n");
  }
}
