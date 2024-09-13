#include <stdio.h>

int main()
{
  int n = 5;
  for (int i= n; i >=1 ; i--)
  {  
    for (int j = 5; j>=6-i; j--)
    {  
      printf("%2d ",i%2);
    }                  
     printf("\n");
  }
}