/*
  1  6 11 16 21
  2  7 12 17 22  
  3  8 13 18 23  
  4  9 14 19 24  
  5 10 15 20 25 
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
