/*
5 6 7 8 9 
4 5 6 7
3 4 5
2 3
1
*/
#include <stdio.h>

int main()
{
  int n = 5;
  int p=5;
  for (int i= n; i >=1 ; i--)
  { 
    for (int j = 0; j<=i-1; j++)
    {
      printf("%d ",p+j);
    }
     p--;
    printf("\n");
  }
}
