/*
 0 1 1 2 3
 5 8 13 21
 34 55 89
 144 233
   377
*/
#include<iostream>
using namespace std;

int main(){
    int i,j,n=5;
    int a=1,b=0,c=0;
   for(i=1;i<=n;i++){
    if(i==5){cout<<"  ";}
    for(j=i;j<=n;j++){
     cout<<" "<<c;
     c=a+b;
     a=b;
     b=c;
      }
   cout<<endl; 
   }
}
