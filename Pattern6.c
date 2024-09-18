/*
  1  2  3  4  5
  6  7  8  9 10    
 11 12 13 14 15    
 16 17 18 19 20    
 21 22 23 24 25
*/
#include<stdio.h>
int main()
{
  int k=1,n = 5;
  for(int i = 1; i <= 5; i++)
    {
      for(int j = 1; j <= n; j++)
        {
          printf("%3d",k); // --> %3d = here 3 is widht of element with space (_345 = %4d) 
          k++;
      }
      printf("\n");
}
return 0;
}
