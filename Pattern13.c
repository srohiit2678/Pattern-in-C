/*
  1 10 11 20 21
  2  9 12 19 22  
  3  8 13 18 23  
  4  7 14 17 24  
  5  6 15 16 25
*/
#include<stdio.h>
// 2 logic

int main(){

int n = 5 ,k;
  for(int i = 1; i <= 2*n; i++,i++)
    {
          k= (i/2)+1;

      for(int j = 1; j <=n; j++)
        {

            printf("%3d",k);

            if(j%2 == 0){
              k += i;
            }
            else{
              k += 10-i;
            }
      }
      printf("\n");
}

return 0;
}



/*

---> 2nd logic <-----


int n = 5 ,k,l;
  for(int i = 1; i <= n; i++)
    {
          k= i;
          l=n-i+1;

      for(int j = 1; j <n; j++)
        {
            if(j%2 == 1){
             printf("%3d",k);
            }
            else{
              printf("%3d",l);
            }
        k +=n;
        l +=n;
      }
      printf("\n");
}

*/