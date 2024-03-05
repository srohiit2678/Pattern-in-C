#include <stdio.h>
int main()
{
  int n=5;
  int f,f1,f2;

  for(int i=1;i<=n;i++)
  {   f1 = -1;
      f2 = 1; 
    for(int j=1;j<=i;j++)
    {  
         f = f1+f2;
         f1 = f2;
         f2 = f;

      printf("%2d ",f);
    }
    printf("\n");
  }
}
