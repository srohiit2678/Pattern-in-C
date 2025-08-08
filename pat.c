#include <stdio.h>
int min(int a,int b){
    if(a<b)return a;
    return b;
}
int main()
{
  int n = 5;
  int a = 2*n-2;
  int b = 2*n-2;
  for(int i=0;i<2*n;i++){
    for(int j=0;j<2*n;j++){
        printf("%d ",n-min(min(i,j),min(a,b)));
    }
    printf("\n");
  }
    }