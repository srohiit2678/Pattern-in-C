/*
    5
   456
  34567
 2345678
123456789   
*/
#include<stdio.h>
int main()
{
  int a=5,b=5;
  int i,j,k;
  for(i=1;i<=5;i++)
  {
    for(k=i;k<5;k++){
      printf(" ");
    }
    for(j=1;j<=i*2-1;j++)
    {
      printf("%d",b);
      b++;
    }
    printf("\n");
    a--;
    b=a;
  }
}