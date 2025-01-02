/*
  1*2*3*10*11*12
    4*5*8*9
      6*7
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,k,l,n=3;
    int p=1,p1=n*n+1;
   for(i=1;i<=n;i++){

    for(k=1;k<=i;k++){
        cout<<"  ";  }

    for(j=0;j<=n-i;j++){
     cout<<p++<<"*";
    }
    for(l=0;l<=n-i;l++){
        cout<<p1++;
       if(l<n-i){ cout<<"*";}
    }
     p1 = p1-1-2*(n-i);
   cout<<endl; 
   }
}