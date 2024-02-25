#include <stdio.h>

int main()
{
  int i, j;
  int n = 5;
  int k=1,l=1,m;
  
  for (i=n;i>=1;i--)
  {    m=i; 
       l=k;
    for (j=n;j>=i;j--)
    {     
        printf("%2d ", l);
         l-=m;
         m++;
    }
    k += i;
    printf("\n");
  }
}
