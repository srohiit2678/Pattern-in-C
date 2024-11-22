/*
E
DE
CDE
BCDE
ABCDE
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n=4;
   for(i=0;i<n;i++){
    for(j=1;j<=n;j++){
    if(i+j==n){cout<<n;}
    else{ cout<<(j+i)%n;  }
     
      }
   cout<<endl; 
   }
}
