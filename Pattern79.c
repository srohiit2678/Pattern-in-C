#include <stdio.h>

int main()
{
  int n = 5;
  int p = n*n+1;
  for (int i= n; i >=1 ; i--)
  {  
    for (int j = 1; j<=i; j++)
    {  
      printf("%2d ",p);// 26 27 28 29 30
      p++;             // 22 23 24 25         // 17 18
    }                  // 19 20 21            // 16
    p -= 2*i; // 31 - 10 = 21 / 26 - 8 = 18 / 22 - 6 = 16 / 19 - 4 = 15
    p++;                // 22 /          19 /          17 / 16
    printf("\n");
  }
}