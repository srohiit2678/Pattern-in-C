/*
01010
00000
01010
00000
01010
*/
#include<iostream>
using namespace std;

int main(){
    int i,j,n=5;
   for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
     if(i%2==0){cout<<i%2;}
     else{cout<<(i+j)%2;}
     
      }
   cout<<endl; 
   }
}

