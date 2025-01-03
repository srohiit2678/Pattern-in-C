/*
ABCD
EFGH
IJKL
MNOP
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n=4;
    char p=65;
   for(i=1;i<=n;i++){
    
    for(j=1;j<=n;j++){
     cout<<p++;
    }
   cout<<endl; 
   }
}