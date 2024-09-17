/*

*/
#include<stdio.h>
// 2 logic

int main(){

int n = 5 ,k;
  for(int i = 1; i <= n; i++)
    {
          k=i;

      for(int j = 1; j <= n; j++)
        {

            printf("%3d",k);
              k+=n;
      }
      printf("\n");
}

return 0;
}

/*
---> 2nd logic <-----

int n = 5 ,k;
  for(int i = 1; i <= n; i++)
    {
          k=i;

      for(int j = i; j <n+i; j++)
        {

            printf("%3d",k);
              k+=n;
      }
      printf("\n");
}


*/
