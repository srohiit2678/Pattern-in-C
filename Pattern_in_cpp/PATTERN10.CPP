/*
6
1 6
1 2 6
1 2 3 6
1 2 3 4 6
1 2 3 4 5 6
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n=5;
   for(i=0;i<=n;i++){
    for(j=1;j<=i;j++){
     cout<<j<< " " ;
   }
   cout<<"6"<<endl;
   }
}