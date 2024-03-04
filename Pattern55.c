#include <stdio.h>
int main()
{
  int n=5;
  int p=1;
  int q=3;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
    {         
      printf("%3d ",p);
      p+=q;
      q+=2;
    }
    printf("\n");
  }
}
