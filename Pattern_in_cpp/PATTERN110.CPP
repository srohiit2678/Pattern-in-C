/*
    *
   **
  ***
 ****
*****
****
***
**
*
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,k,p=0,n=5;
   for(i=1;i<2*n;i++){
    for(k=i;k<n;k++)
        {cout<<" ";}
        (i<=n)?p++:p--;
    for(j=1;j<=p;j++){
      cout<<"*"; 
    }
   cout<<endl; 
   }
}