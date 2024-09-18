/*
 1 
 9  2
10  8  3
14 11  7  4       
15 13 12  6  5 
*/
#include <stdio.h>

int main()
{
  int n=5;
 
  int x=1,y=n;
  int p,q,r,s;
 
  for (int i=n;i>=1;i--)
  {    p = x;
       q = y;
       r = i;
       s = i+1;
    for (int j=n;j>=i;j--)
    {     
       if(((i+j)%2 == 0)){
        printf("%2d ",p);
       }
       else
       {
        printf("%2d ",q);
       }
       p = p - r++;
       q = q - s++;
    }
      y = y+i-1;
      x = x+i;
    printf("\n");
  }
}
