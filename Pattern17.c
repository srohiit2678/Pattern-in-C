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
