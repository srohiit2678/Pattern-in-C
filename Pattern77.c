/*
 1  2  3  4  5 
 6  7  8  9       
10 11 12
13 14
15
*/
#include <stdio.h>

int main()
{
  int n = 5;
  int p=1;
  for (int i= n; i >=1 ; i--)
  { 
    for (int j = 0; j<=i-1; j++)
    {
      printf("%2d ",p);
    p++;
    }
     
    printf("\n");
  }
}
