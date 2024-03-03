#include <stdio.h>
int main()
{
  int n=5;
  int p;
  for(int i=1;i<=n;i++)
  {
    p=1;
    for(int j=1;j<=i;j++)
    {         
      printf("%d ",p);
      p = p*(i-j)/j;
    }
    printf("\n");
  }
}
