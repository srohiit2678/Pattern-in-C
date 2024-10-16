/*
    1
   121
  12421
 1248421
1248168421 
*/
#include<stdio.h>
int main()
{
  int b;
  int i,j,k;
  for(i=1;i<=5;i++)
  { b=1;
    for(k=i;k<5;k++){
      printf(" ");
    }
    for(j=1;j<=i*2-1;j++)
    {  
      if(j<i){
      printf("%d",b);
      b*=2;
      }
      else{
       printf("%d",b);
       b/=2;
      }
      }
    printf("\n");
    }
}
