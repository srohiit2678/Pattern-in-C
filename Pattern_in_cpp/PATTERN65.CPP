/*
55555
44445
33345
22345
12345
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n=5;
   for(i=n;i>=1;i--){
    for(j=1;j<=n;j++){
     if(j<=i){   cout<<i;    }
     else{       cout<<j;    } 
    }
    cout<<endl;
   }
}