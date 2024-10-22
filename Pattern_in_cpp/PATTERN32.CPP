/*
 ***********
  ***********
   ***********
    ***********        
     ***********       
      *********** 
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,k,n=6;
   for(i=1;i<=n;i++){
    for(k=1;k<=i;k++){      
     cout<<  " "  ; 
    }
    for(j=1;j<2*n;j++){
     cout<<  "*"  ;
    }
   cout<<endl;
   }
}