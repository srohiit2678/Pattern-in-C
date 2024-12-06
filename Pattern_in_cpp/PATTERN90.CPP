/*
*
*1*
*121*
*12321*
*121*
*1*
*
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n=5;
    int p=-1,p1=0;
     cout<<"*"<<endl;
   for(i=1;i<=n;i++){
   if(i==1){cout<<"*";}
    (i<=(n/2+1))?p+=2:p-=2;
    for(j=1;j<=p;j++){
        ((j<=i) &&(j<=p/2+1))? p1++:p1--;
        cout<<p1;
        } p1=0;
       cout<<"*"<<endl<<"*"; 
   }
}