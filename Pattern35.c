/*
1 
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/
#include<stdio.h>

int main(){
    int i,j;
    int n=5;
    for(i=1;i<=n;i++){
      for(j=1;j<=i;j++){
          printf("%d ",i);        
      }
      printf("\n");
    } 
}
