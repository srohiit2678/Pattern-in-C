/*
 A  B  C  D  E 
 B  C  D  E  F    
 C  D  E  F  G    
 D  E  F  G  H    
 E  F  G  H  I 
*/
#include<stdio.h>

int main(){
    int i,j;
    int n=5;
    int k;
    for(i=64;i<64+n;i++){ 
        k=i;
      for(j=1;j<=n;j++){
          printf("%2c ",k+j);        
      }
      printf("\n");
    } 
}