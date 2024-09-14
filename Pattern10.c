/*

*/
#include<stdio.h>
// 2 logics


int main()
{
  int n = 5;
  for(int i = 1; i <= n; i++)
    {
      for(int j = 1; j <= (n+2)/2; j++)
        {
          {
            printf("%d %d ",j,i);
          }
      }
      printf("\n");
}
return 0;
}



/*
---> 2nd logic <-----

int n = 5;
  for(int i = 1; i <= n; i++)
    {
      for(int j = 1; j <= 3; j++)
        {
            printf("%d %d ",j,i);
                    
      }
      printf("\n");
}
*/