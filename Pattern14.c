/*

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
