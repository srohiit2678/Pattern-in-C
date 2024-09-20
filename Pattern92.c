/*
E D C B A 
F E D C
G F E
H G
I
*/
#include <stdio.h>
int main()
{
  int n = 5;
  int p;
  for (int i=1; i <= n ; i++)
  {  p=63+n+i;
    for (int j =n; j>= i; j--)
    {  
      printf("%c ",p--);
    }                  
     printf("\n");
  }
}

