/*
*        
**
***
****
*********
     ****
      ***
       **
        *
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n=5;

   for(i=1;i<2*n;i++){
    for(j=1;j<2*n;j++){
    if((j<=i && i<=n) || (j>=i && i>=n)  )
     cout<<"*";
    else {cout<<" ";}
    }
   cout<<endl; 
   }
}