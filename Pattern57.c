/*
 1 
 1  2
 3  5  8
13 21 34 55       
89 144 233 377 610

*/
#include <stdio.h>
int main()
{
  int n=5;
  int f=1,f1=0,f2=1;

  for(int i=1;i<=n;i++)
  { 
    for(int j=1;j<=i;j++)
    {         
      printf("%2d ",f);
        f = f1+f2;
        f1 = f2;
        f2 = f;
    }
    printf("\n");
  }
}
