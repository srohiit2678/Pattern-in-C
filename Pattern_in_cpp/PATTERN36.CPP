/*
1 2 3 4 5 
5 4 3 2 1
1 2 3 4 5
5 4 3 2 1
1 2 3 4 5
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n=5,k;
   for(i=1;i<=n;i++){
    k=5;
    for(j=1;j<=n;j++){
    if(i%2==0){cout<<k--<<" ";}
    else{ cout<< j<< " "  ;}
    
    }
   cout<<endl;
   }
}