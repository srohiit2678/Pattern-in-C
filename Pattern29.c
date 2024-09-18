/*
 E  D  C  B  A 
 E  D  C  B  A    
 E  D  C  B  A    
 E  D  C  B  A    
 E  D  C  B  A  
*/
#include<stdio.h>

int main(){
    int i,j;
    int n=5;

    for(i=1;i<=n;i++){ 
        for(j=64+n;j>=65;j--){
          printf("%2c ",j);        
      }
      printf("\n");
    }
}
