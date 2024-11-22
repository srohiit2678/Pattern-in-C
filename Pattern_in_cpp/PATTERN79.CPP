/*
E
DE
CDE
BCDE
ABCDE
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n=5;
    char ch;
   for(i=n;i>=1;i--){
    ch=64+i;
    for(j=i;j<=n;j++){ 
     cout<<ch++;     
      }
   cout<<endl; 
   }
}
