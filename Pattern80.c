/*
 5  9 12 14 15 
 4  8 11 13       
 3  7 10
 2  6
 1
*/
#include <stdio.h>

int main()
{
  int n = 5;
  int p ;
  for (int i= n; i >=1 ; i--)
  {  p =i;
    for (int j = 5; j>=6-i; j--)
    {  
      printf("%2d ",p);  
      p += j-1;  
    }                  
     printf("\n");
  }
}