/*
555555555
 4444444
  33333
   222
    1
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,k,n=5;
   for(i=n;i>=1;i--){
    for(k=1;k<=n-i;k++){
        cout<<" ";
    }
    for(j=1;j<2*i;j++){

     cout<< i ;
     }
   cout<<endl;
   }
}