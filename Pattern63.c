/*
0 
1 0
0 1 0
1 0 1 0
0 1 0 1 0
*/
#include <stdio.h>
int main()
{
  int n=5;
  int p;
  for(int i=0;i<=n-1;i++)
  {  p=i;
    for(int j=0;j<=i;j++)
    {         
         printf("%d ",p%2); p++;
    }
    printf("\n");
  }
}
