/*
A 
B A
C B A
D C B A
E D C B A
*/
#include <stdio.h>

int main()
{
  int n = 5;
  int  k=64;
  for (int i = 1; i <= n; i++)
  { k+=i;
    for (int j = 1; j<= i; j++)
    {
      printf("%c ",k);
       k--;
    }
   
    printf("\n");
  }
}
