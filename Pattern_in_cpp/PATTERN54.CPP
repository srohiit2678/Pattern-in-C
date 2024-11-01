/*
    A 
   B C
  D E F
 G H I J
K L M N O
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,k,n=5;
    char p='A';
   for(i=1;i<=n;i++){
    for(k = n;k>i;k--){
        cout<<" ";
    }
    for(j=1;j<=i;j++){
     cout<< p++<< " "  ;    
    }
   cout<<endl;
   }
}