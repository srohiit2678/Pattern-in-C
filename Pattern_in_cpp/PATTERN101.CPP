/*
p
qp
rqp
srqp
tsrqp
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n=5;
    char p='o';
   for(i=1;i<=n;i++){
    p+=i;
    for(j=1;j<=i;j++){
     cout<<p--;
    }
   cout<<endl; 
   }
}