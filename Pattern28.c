#include<stdio.h>

int main(){
    int i,j;
    int n=5;

    for(i=64+n;i>=65;i--){ 
        for(j=0;j<n;j++){
          printf("%2c ",i);        
      }
      printf("\n");
    }
}
