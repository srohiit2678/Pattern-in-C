#include<stdio.h>

int main(){
    int i,j;
    int n=5;

    for(i=65;i<(65+n);i++){ 
        for(j=0;j<n;j++){
          printf("%2c ",j+65);        
      }
      printf("\n");
    }
}
