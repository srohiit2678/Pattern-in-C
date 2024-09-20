/*
5 4 3 2 1 
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
*/
#include <stdio.h>
int main()
{
  int n = 5;
  int p;
  for (int i=1; i <= n ; i++)
  {  p=65+n-i;
    for (int j =n; j>= i; j--)
    {  
      printf("%c ",p++);
    }                  
     printf("\n");
  }
}

