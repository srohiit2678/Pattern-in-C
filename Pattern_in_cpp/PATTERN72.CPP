/*
*****
  ***
   **
  ***
*****
*/
#include<iostream>
using namespace std;

int main(){
    int i,j,n=5;
   for(i=1;i<=n;i++){
    
    for(j=1;j<=n;j++){
    if((i==1 && j==1) ||(i==5&&j==1)) {cout<<"*"; }
    else if(j==1) {cout<<" ";}
    else if((i==j && j<=3) ||((j==2) && (i<5 && i>1))){cout<<" ";}
    else  { cout<<"*";}
      }
   cout<<endl; 
   }
}
