/*
123456789
 1234567
  12345
   123
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
     cout<< j ;
     }
   cout<<endl;
   }
}