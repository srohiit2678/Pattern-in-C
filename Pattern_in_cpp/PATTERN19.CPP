/*
1 
0 1
1 0 1
0 1 0 1
1 0 1 0 1
0 1 0 1 0 1
1 0 1 0 1 0 1
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n=7;
   for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
     cout<< (i+j+1)%2<< " "  ;
    }
   cout<<endl;
   }
}