/*
1
2 4
7 11 16
22 29 37 46      
56 67 79 92 106
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n=5,p=1,p1=1;
   for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
    cout<<p<<" ";
    p+=p1++;
    }
   cout<<endl; 
   }
}