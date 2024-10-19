/*
1 0 1 0 1 0 1 
0 1 0 1 0 1
1 0 1 0 1
0 1 0 1
1 0 1
0 1
1
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n=7;
   for(i=1;i<=n;i++){
    for(j=i;j<=n;j++){
     cout<< (j)%2<< " "  ;
    }
   cout<<endl;
   }
}