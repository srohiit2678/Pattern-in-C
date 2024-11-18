/*
12321
22322
33333
22322
12321
*/
#include<iostream>
using namespace std;

int main(){
    int i,j,n=5;
   for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
     if(i==3 || j==3){
        cout<<"3";
     }
     else if(i%2==0 || j%2==0){
        cout<<"2";
     }
     else{
        cout<<"1";
     }
      }
   cout<<endl; 
   }
}
