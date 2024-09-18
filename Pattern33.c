/*
 E  J  O  T  Y 
 D  I  N  S  X    
 C  H  M  R  W    
 B  G  L  Q  V    
 A  F  K  P  U 
*/
#include<stdio.h>

int main(){
    int i,j;
    int n=5;
    int k;
    for(i=64+n;i>=65;i--){ 
        k=i;
      for(j=1;j<=n;j++){
          printf("%2c ",k);        
          k+=5;
      }
      printf("\n");
    } 
}
