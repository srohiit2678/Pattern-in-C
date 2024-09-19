/*
E D C B A 
D C B A
C B A
B A
A
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
      printf("%c ",p--);
    }                  
     printf("\n");
  }
}

