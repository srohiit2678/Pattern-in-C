/*
0 0 0 0 0 
 0 1 0 1
  0 1 2
   0 1
    0
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n=5,k,p=1;
   for(i=n;i>=1;i--){
      for(k=i;k<n;k++){
         cout<<" ";
      }
    for(j=0;j<i;j++){
      cout<< j%p <<" " ;
      }
   cout<<endl;  p++;
   }
}