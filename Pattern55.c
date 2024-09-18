/*
  1 
  4   9
 16  25  36       
 49  64  81 100   
121 144 169 196 225
*/
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
