/*
A A A A A 
B B B B
C C C
D D
E
*/
#include <stdio.h>

int main()
{
  int n = 5;
  int p=64;
  for (int i=1; i <= n ; i++)
  {     p++;
    for (int j =n; j>= i; j--)
    {  
      printf("%c ",p);
    }                  
     printf("\n");
  }
}

