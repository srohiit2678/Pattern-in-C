/*
    1 
   0 0
  1 2 1
 0 2 2 0
1 2 2 2 1
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,k,n=5;
   for(i=1;i<=n;i++){
    for(k=i;k<n;k++){
        cout<<" ";
    }
    for(j=1;j<=i;j++){
    if( j==1||j==i){
        cout<<i%2<< " ";
    }
      else{ cout<<"2 " ;}
    }
   cout<<endl;
   }
}