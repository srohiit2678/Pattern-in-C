/*
1 
3 2
4 5 6
10 9 8 7
11 12 13 14 15
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n=5;
    int p=1,p1=1;
   for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
     if(i%2==0){cout<<p1--<<" ";}
     else{  cout<<p<<" ";     } 
     p++;
      }
     p1=p+i;
   cout<<endl; 
   }
}
