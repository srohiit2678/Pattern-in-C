
/*
12012
2012
012
12
2
*/
#include<iostream>
using namespace std;
/*
int main(){
    int i,j,n=5,k=1;
   for(i=n;i>=1;i--){
    for(j=0;j<i;j++){
      cout<< (j+k)%3 ;
      }
   cout<<endl;  k++;
   }
}
*/
int main(){
    int i,j,n=5;
   for(i=1;i<=n;i++){
    for(j=i;j<=n;j++){
      cout<< j%3 ;
      }
   cout<<endl; 
   }
}
