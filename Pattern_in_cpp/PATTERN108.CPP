/*
1 
2 0 2
3 0 0 0 3
4 0 0 0 0 0 4
5 0 0 0 0 0 0 0 5  
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n=5;
   for(i=1;i<=n;i++){
    for(j=1;j<2*i;j++){
    if(j==1 || (j==2*i-1)){ cout<<i<<" "; }
    else {   cout<<"0 ";  }
    }
   cout<<endl; 
   }
}