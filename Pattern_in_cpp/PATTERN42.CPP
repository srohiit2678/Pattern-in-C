/*
    1
   222
  33333
 4444444
555555555
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,k,n=5;
   for(i=1;i<=n;i++){
    for(k = n;k>i;k--){
        cout<<" ";
    }
    for(j=1;j<2*i;j++){
     cout<< i  ;    
    }
   cout<<endl;
   }
}