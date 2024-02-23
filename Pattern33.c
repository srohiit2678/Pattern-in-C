#include<stdio.h>

int main(){
    int i,j;
    int n=5;
    int k;
    for(i=64+n;i>=65;i--){ 
        k=i;
      for(j=1;j<=n;j++){
          printf("%2c ",k);        
          k+=5;
      }
      printf("\n");
    } 
}
