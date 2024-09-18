/*
 1 
 2  6
 3  7 10
 4  8 11 13       
 5  9 12 14 15
*/
#include <stdio.h>
int main()
{
  int n=5;
  int p=1;

  for(int i=1;i<=n;i++)
  { p=i;
    for(int j=1;j<=i;j++)
    {         
      printf("%2d ",p);
      p+=(n-j); 
    }
    printf("\n");
  }
}
