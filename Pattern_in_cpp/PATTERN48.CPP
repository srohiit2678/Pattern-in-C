/*
543212345
 5432345
  54345
   545
    5
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,k,n=5,p;
   for(i=n;i>=1;i--){
     p=n+1;
    for(k=1;k<=n-i;k++){
        cout<<" ";
    }
    for(j=2*i-1;j>=1;j--){
        (j>=i)?p--:p++;
     cout<< p ;
     }
   cout<<endl;
   }
}