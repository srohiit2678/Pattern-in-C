/*
E E E E E 
D D D D
C C C
B B
A
*/
#include <stdio.h>

int main()
{
  int n = 5;
  int p=64+n;
  for (int i=1; i <= n ; i++)
  {     
    for (int j =n; j>= i; j--)
    {  
      printf("%c ",p);
    }
     p--;                  
     printf("\n");
  }
}

