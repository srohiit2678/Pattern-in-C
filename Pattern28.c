/*
 E  E  E  E  E 
 D  D  D  D  D    
 C  C  C  C  C    
 B  B  B  B  B    
 A  A  A  A  A 
*/
#include<stdio.h>

int main(){
    int i,j;
    int n=5;

    for(i=64+n;i>=65;i--){ 
        for(j=0;j<n;j++){
          printf("%2c ",i);        
      }
      printf("\n");
    }
}
