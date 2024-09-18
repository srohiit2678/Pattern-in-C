/*
5 4 3 2 1 
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
*/
#include<stdio.h>
int main()
{
  int n = 5;  

  for(int i = 1; i <= n; i++)
    {
      for(int j = n; j >= 1; j--)
        {
          printf("%d ",j);
      }
      printf("\n");
}
return 0;
}
