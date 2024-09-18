/*
1 2 3 4 5 
1 2 3 4
1 2 3
1 2
1
*/
#include <stdio.h>

int main()
{
  int n = 5;
  for (int i= 0; i <= n-1; i++)
  { 
    for (int j = 1; j<=n-i; j++)
    {
      printf("%d ",j);
    }
   
    printf("\n");
  }
}
