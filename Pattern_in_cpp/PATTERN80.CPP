/*
7 7 7 7 7 7 7 
          7
        7
      7
    7
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n=7;
   for(i=1;i<=5;i++){
    for(j=1;j<=n;j++){
     if(i==1 || (i+j)==n+1){cout<<n<<" ";}
     else{cout<<"  ";}
     
      }
   cout<<endl; 
   }
}
