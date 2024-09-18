/*
A 
B B
C C C
D D D D
E E E E E
*/
#include <stdio.h>

int main()
{
  int n = 5;
  int k=65;
  for (int i = 1; i <= n; i++)
  {  
    for (int j = 1; j<= i; j++)
    {
      printf("%c ",k);
    }
    k++;
    printf("\n");
  }
}
