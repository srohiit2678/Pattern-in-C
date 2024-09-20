/*
A 
B C
D E F
G H I J
K L M N O
*/
#include <stdio.h>
int main()
{
  int n = 5;
  int p=65;
  for (int i=1; i <= n ; i++)
  { 
    for (int j =1; j<= i; j++)
    {  
      printf("%c ",p++);
    }                  
     printf("\n");
  }
}

