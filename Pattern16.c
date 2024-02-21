#include<stdio.h>


int main(){
    
    int i,j,k,n=5;

    for(i=1;i<=n;i++){
        k=i;
        for(j=1;j<=n;j++){
          printf("%d ",k++);
        }
      printf("\n");
      
    }


 
}
