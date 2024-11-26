/*
33333
32223
32123
32223
33333
*/
#include<iostream>
using namespace std;
int min(int a,int b){
    if(a>b){
        return b;
    }
    else if(b>a){
        return a;
    }
    else{return a;}
}
int main(){
    int i,j,n=3;
   int top,rit,let,bot;
   for(i=0;i<2*n-1;i++){
    for(j=0;j<2*n-1;j++){
     top =i;
     let =j;
     rit =(2*n-1)-1-j;
     bot =(2*n-1)-1-i;
     cout<<n-min(min(top,let),min(rit,bot));
      }
   cout<<endl; 
   }
}
