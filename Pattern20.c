/*

*/
#include<stdio.h>
int main(){
    
    int i,j;
    int n=5;

    for(i=1;i<=n;i++){
        
        for(j=1;j<=n;j++){
          if(i%2==1){
          printf("%2d ",j%2);
        }
        else{
          printf("%2d ",i%2);
        }
      }
      printf("\n");
    }
}