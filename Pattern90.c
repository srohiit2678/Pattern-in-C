/*
E D C B A 
E D C B
E D C
E D
E
*/
#include <stdio.h>

int main()
{
  int n = 5;
  int p;
  for (int i=1; i <= n ; i++)
  {  p=69;
    for (int j =n; j>= i; j--)
    {  
      printf("%c ",p--);
    }                  
     printf("\n");
  }
}

