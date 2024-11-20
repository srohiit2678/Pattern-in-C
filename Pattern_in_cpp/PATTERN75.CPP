/*
12345
2  5
3 5
45
5
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n=5;
   for(i=1;i<=n;i++){
    cout<<i;   
    for(j=i+1;j<=n;j++){
     if(i==1 || j==n){cout<<j;}
     else {cout<<" ";}
      
    }
    cout<<endl;
   }
}