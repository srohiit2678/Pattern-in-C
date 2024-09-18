/*
E 
D D
C C C
B B B B
A A A A A
*/
#include <stdio.h>

int main()
{
  int n = 5;
  int  k=64+n;
  for (int i = 1; i <= n; i++)
  { 
    for (int j = 1; j<= i; j++)
    {
      printf("%c ",k);
       
    }
   k--;
    printf("\n");
  }
}
