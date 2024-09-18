/*
 1  3  5  7  9 
 3  5  7  9 11   
 5  7  9 11 13   
 7  9 11 13 15   
 9 11 13 15 17 
*/
#include<stdio.h>


int main(){
    
    int i,j,k,n=5;

    for(i=1;i<=n*2;i+=2){
        k=i;
        for(j=1;j<=n;j++){
          printf("%2d ",k);
          k+=2;
        }
      printf("\n"); 
    }
}
