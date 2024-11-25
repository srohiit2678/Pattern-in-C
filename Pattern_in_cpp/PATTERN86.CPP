/*
 A       A 
  B     B
   C   C
    D D
     E
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,k,n=5;
    char ch=65;
   for(i=n;i>=1;i--){
    for(k=i;k<=n;k++){
        cout<<" "; }
    for(j=1;j<=i;j++){
     if(j==1 ||j==i){cout<<ch<<" ";}
     else{cout<<"  ";}
      }
   cout<<endl; 
    ch++;
   }
}
