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
