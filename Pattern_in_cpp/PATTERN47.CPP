/*
567898765
 4567654
  34543
   232
    1
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,k,n=5,p;
   for(i=n;i>=1;i--){
    p=i-1;
    for(k=1;k<=n-i;k++){
        cout<<" ";
    }
    for(j=1;j<2*i;j++){
      (j<=i)?p++:p--;  
        cout<< p ;
     }
   cout<<endl;
   }
}