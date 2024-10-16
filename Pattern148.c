/*
    0
   101
  21012
 3210123
432101234 
*/
#include<stdio.h>
int main()
{
  int b;
  int i,j,k;
  for(i=1;i<=5;i++)
  { b=i-1;
    for(k=i;k<5;k++){
      printf(" ");
    }
    for(j=1;j<=i*2-1;j++)
    {  
      if(j<i){
      printf("%d",b--);
      }
      else{
     printf("%d",b++);
      }
      }
    printf("\n");
    }
}