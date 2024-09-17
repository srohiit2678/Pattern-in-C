/*

*/
#include<stdio.h>


int main(){
    
    int i,j;
    int k=1,n=5;

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
          printf("%2d ",k%2);
          k++;
        }
      printf("\n"); 
    }
}
