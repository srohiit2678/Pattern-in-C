/*
  5 10 15 20 25
  4  9 14 19 24  
  3  8 13 18 23  
  2  7 12 17 22  
  1  6 11 16 21  
*/
#include<stdio.h>


int main(){

int n = 5 ,k;
  for(int i = n; i >= 1; i--)
    {
        k= i;

      for(int j = 1; j <=n; j++)
        {
            printf("%3d",k);

            k += n;    
      }
      printf("\n");
}

return 0;
}
