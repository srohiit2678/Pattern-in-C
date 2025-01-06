/*
##1##
##1##
00100
##1##
##1##
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n=5;
   for(i=1;i<=n;i++){
  
    for(j=1;j<=n;j++){
     if(j==(n/2+1)){cout<<"1";}
    else if(i==(n/2+1)){ cout<<"0"; }
    else {cout<<"#"; }
    }
   cout<<endl; 
   }
}