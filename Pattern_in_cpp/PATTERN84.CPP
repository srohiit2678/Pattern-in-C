/*
*        *
**      **
***    ***
****  ****
**********
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n=5;
   for(i=1;i<=n;i++){
    for(j=1;j<=2*n;j++){
    if(j<=i || j>(2*n-i)){
        cout<<"*";
    }
     else{
        cout<<" ";
     }
        }
   cout<<endl; 
   }
}
