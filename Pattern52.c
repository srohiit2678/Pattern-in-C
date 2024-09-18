/*
 5 
 9  4 
12  8  3 
14 11  7  2 
15 13 10  6  1
*/
#include <stdio.h>

int main()
{
  int n=5;
  int x=n;
  int y,p;
  for (int i=n;i>=1;i--)
  {    p = x;
       y =i+1;
    for (int j=n;j>=i;j--)
    {         
      printf("%2d ",p);
       p = p - y;
       y++;
    }
      x = x+i-1;
      
    printf("\n");
  }
}
