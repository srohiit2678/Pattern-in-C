/*
4 
6 8
9 10 12
14 15 16 18
20 21 22 24 25
*/
#include<iostream>
using namespace std;
int prime(int n){
    int c=1;
    for(int i=2;i<n/2+1;i++){
        if(n%i==0){c=0;}
       }
       return c;
}
int main(){
    int i,j,n=5;
   int p=1;
   for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
      while(prime(p)){
        p++;
        }
     cout<< p++<< " "  ;
    }
   cout<<endl;
   }
}