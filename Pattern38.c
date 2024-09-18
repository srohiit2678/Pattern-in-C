/*
5 
5 4
5 4 3
5 4 3 2
5 4 3 2 1
*/
#include<stdio.h>

int main(){
    int i,j;
    int n=5;
    for(i=n;i>=1;i--){
      for(j=5;j>=i;j--){
          printf("%d ",j);        
      }
      printf("\n");
    } 
}
