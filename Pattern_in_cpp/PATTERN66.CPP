/*
12345
22345
33345
44445
55555
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n=5;
   for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      if(i>=j){cout<< i  ;}
     else{cout<< j;}
    }
   cout<<endl;
   }
}