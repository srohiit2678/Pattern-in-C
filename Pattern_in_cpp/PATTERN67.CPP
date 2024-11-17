/*
54321
54322
54333
54444
55555
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n=5;
   for(i=1;i<=n;i++){
    for(j=n;j>=1;j--){
      if(i>=j){cout<< i ;}
     else{cout<< j ;}
    }
   cout<<endl;
   }
}