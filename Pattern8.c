#include<stdio.h>
// 2 logics

int is_even(int k){
  if(k%2==0){
    return k;
  }
  else{
    while(k%2!=0)
    {
      k++;
    }
    return k;
  }
}
int main()
{
  int k=1,n = 5;
  for(int i = 1; i <= n; i++)
    {
      for(int j = 1; j <= n; j++)
        {
          {
            printf("%3d",k=is_even(k)); // --> %3d = here 3 is widht of element with space (_345 = %4d)
         
          }
          k++;
      }
      printf("\n");
}


/*
---> 2nd logic <-----

k=1;
for(int i = 1; i <= n; i++)
    {
      for(int j = 1; j <= n; j++)
        {
          {
            printf("%3d",k); // --> %3d = here 3 is widht of element with space (_345 = %4d)
          }
          k += 2;
      }
      printf("\n");
}

*/

return 0;
}
