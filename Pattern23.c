/*
 1  1  1  1  1 
 0  0  0  0  0   
 1  1  1  1  1   
 0  0  0  0  0   
 1  1  1  1  1   
*/
#include<stdio.h>

int main(){
    int i,j;
    int n=5;

    for(i=1;i<=n;i++){ 
        for(j=1;j<=n;j++){
         
          printf("%2d ",i%2);
        
        
      }
      printf("\n");
    }
}
