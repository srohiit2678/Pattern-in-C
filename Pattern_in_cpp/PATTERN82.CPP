/*
    A 
   0 0
  B B B
 0 0 0 0
C C C C C
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,k,n=5;
    char ch=65;
   for(i=1;i<=n;i++){
    for(k=1;k<=n-i;k++){
        cout<<" ";
    }
    for(j=1;j<=i;j++){
    if(i%2==0){cout<<"0 ";   
     if(j==1){ch++;}
     }
     else{cout<<ch<<" ";}
      }
   cout<<endl; 
   }
}
