/*
* * * * * 
* * * *
* * *
* *
*
* *
* * *
* * * *
* * * * *
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n=5;
    int p=n+1;
   for(i=1;i<2*n;i++){
    (i<=n)?p--:p++;
    for(j=1;j<=p;j++){
     cout<<"* ";
    }
   cout<<endl; 
   }
}