/*
 A  B  C  D  E 
 F  G  H  I  J    
 K  L  M  N  O    
 P  Q  R  S  T 
 U  V  W  X  Y 
*/
#include<stdio.h>

int main(){
    int i,j;
    int n=5;
    int k=65;
    for(i=1;i<=n;i++){ 
        for(j=1;j<=n;j++){
          printf("%2c ",k++);        
      }
      printf("\n");
    }
    
}
