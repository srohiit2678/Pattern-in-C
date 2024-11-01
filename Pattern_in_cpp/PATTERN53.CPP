/*
    1
   123
  12345
 1234567
123456789
 1234567
  12345
   123
    1
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,k,n=5;
    int p=n,p1=0;
   for(i=1;i<n*2;i++){
    (i<=n)?p--:p++;
    for(k=1;k<=p;k++){
        cout<<" ";
    }
     (i<=n)?p1++:p1--;
    for(j=1;j<2*p1;j++){
     cout<< j;
     }
   cout<<endl;
   }
}