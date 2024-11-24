/*
A 
A B
A B C
A B C D
A B C D E
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n=5;
    char p;
   for(i=1;i<=n;i++){
    p=65;
    for(j=1;j<=i;j++){
        cout<<p++<<" ";
      }
   cout<<endl; 
   }
}
