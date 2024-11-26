/*
1
AB
123
ABCD
12345
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n=5;
    char p;
   for(i=1;i<=n;i++){
    p=65;
    for(j=1;j<=i;j++){
     if(i%2==0){cout<<p++;}
     else{cout<<j;}
      }
   cout<<endl; 
   }
}
