/*
5       5
54     45
543   345
5432 2345
543212345
*/
#include<iostream>
using namespace std;
int main(){
    
    int i,j,k,l,n=5; 
   for(i=n;i>=1;i--){
    for(j=n;j>=i;j--){
     cout<<j;
    }
    for(k=1;k<=2*i-3;k++){
        cout<<" ";
    }
    for(l=i;l<=n;l++){
       if(l!=1) cout<<l;
    }
   cout<<endl; 
   }
}