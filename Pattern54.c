/*
1 
1 2
2 3 4
4 5 6 7
7 8 9 10 11   
*/
#include <stdio.h>
int main()
{
  int n=5;
  int p=1;
  for(int i=1;i<=n;i++)
  {
    p=p;
    for(int j=1;j<=i;j++)
    {         
      printf("%d ",p);
      p++;
    }
    p--;
    printf("\n");
  }
}
