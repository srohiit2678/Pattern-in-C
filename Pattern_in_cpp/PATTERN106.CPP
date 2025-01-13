/*
* * 0 * * 
# * 0 * #
* * 0 * *
# * 0 * #
* * 0 * *
# * 0 * #
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n=5;
   for(i=1;i<=n+1;i++){
    for(j=1;j<=n;j++){
    if(j==(n/2+1))
    { cout<<"0 "; }
    else if(i%2==1 || j%2==0){   cout<<"* ";  }
    else{  cout<<"# ";}
    }
   cout<<endl; 
   }
}