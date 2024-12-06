/*
     1 
    1 2
   1   3
  1     4
 1 2 3 4 5
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,k,n=5;
   for(i=1;i<=n;i++){
    for(k=n;k>=i;k--){
        cout<<" ";
    }
    for(j=1;j<=i;j++){
     if(j==1 || j==i ||
       i==n){cout<<j<<" ";}
     else{cout<<"  ";}
      }
   cout<<endl; 
   }
}
