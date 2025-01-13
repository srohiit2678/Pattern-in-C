/*
1 0 0 0 0 0 1 
0 1 0 0 0 1 0
0 0 1 0 1 0 0
0 0 0 1 0 0 0
0 0 1 0 1 0 0
0 1 0 0 0 1 0
1 0 0 0 0 0 1
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n=7;
   for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
    if(i==j || (i+j==n+1)){ cout<<"1 "; }
    else {   cout<<"0 ";  }
    }
   cout<<endl; 
   }
}