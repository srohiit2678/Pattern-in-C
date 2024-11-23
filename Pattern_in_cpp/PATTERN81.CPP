/*
   1 
  4 9
 16 25 36
49 64 81 100
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,k,n=4,p=1,p1=1;
   for(i=1;i<=n;i++){
    for(k=1;k<=n-i;k++){
        cout<<" ";
    }
    for(j=1;j<=i;j++){
    //printf(" %2d",p);
     cout<<p<<" ";
     p1+=2;
     p+=p1;
      }
   cout<<endl; 
   }
}
