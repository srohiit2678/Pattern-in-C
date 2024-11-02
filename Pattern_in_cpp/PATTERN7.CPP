/*
5 4 3 2 1 
5 4 3 2
5 4 3
5 4
5
*/

#include<iostream>
using namespace std;
int main(){
    int i,j,n=5;
   for(i=1;i<=n;i++){
    for(j=5;j>=i;j--){
     cout<<j<< " " ;
   }
   cout<<endl;
   }
}
