/*
             5   
          6  4   
      12  7  3   
   13 11  8  2   
15 14 10  9  1 
*/
#include <stdio.h>
int main()
{
  int n = 5;
  int x=1,y=n;
  int p,q,r,s;
  printf("\n");   
  for (int i=n; i >= 1 ; i--)
  {   p = x;
      q = y;
      r = i;
      s = i+1;
    for (int k=i ;k>1; k--) // for space
    { 
      printf("   "); 
    }    
    for (int j = 1; j<= (n+1)-i; j++) // for pattern
    {    
      if(((i+j)%2 == 1)){
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


