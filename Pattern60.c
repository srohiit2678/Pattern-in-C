/*
0 
1 1
0 0 0
1 1 1 1
0 0 0 0 0
1 1 1 1 1 1 
*/
#include <stdio.h>
int main()
{
  int n=5;
  for(int i=0;i<=n;i++)
  {  
    for(int j=0;j<=i;j++)
    {         
         printf("%d ",i%2);
    }
    printf("\n");
  }
}
