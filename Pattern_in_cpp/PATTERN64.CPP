/*
55555
54444
54333
54322
54321
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n=5;
   for(i=n;i>=1;i--){
    for(j=n;j>=1;j--){
     if(j<=i){   cout<<i;    }
     else{       cout<<j;    } 
    }
    cout<<endl;
   }
}