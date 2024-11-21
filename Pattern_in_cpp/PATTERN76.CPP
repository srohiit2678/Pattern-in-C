/*
    9
   79
  579
 3579
13579
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n=5;
   for(i=2*n-1;i>=1;i-=2){
    for(j=1;j<2*n;j+=2){
     if(j<i){cout<<" ";}
     else {cout<<j;}
      }
   cout<<endl; 
   }
}
