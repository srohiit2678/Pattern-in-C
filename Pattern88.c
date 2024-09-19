/*
A B C D E 
A B C D
A B C
A B
A
*/
#include <stdio.h>

int main()
{
  int n = 5;
  int p;
  for (int i=1; i <= n ; i++)
  {     p=65;
    for (int j =n; j>= i; j--)
    {  
      printf("%c ",p++);
    }                  
     printf("\n");
  }
}

