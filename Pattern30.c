#include<stdio.h>

int main(){
    int i,j;
    int n=5;
    int k=65;
    for(i=1;i<=n;i++){ 
        for(j=1;j<=n;j++){
          printf("%2c ",k++);        
      }
      printf("\n");
    }
    
}
