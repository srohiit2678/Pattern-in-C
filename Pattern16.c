/*
1 2 3 4 5 
2 3 4 5 6        
3 4 5 6 7        
4 5 6 7 8        
5 6 7 8 9        
*/
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
