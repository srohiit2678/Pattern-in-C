/*
* 
- -
* * *
- - - -
* * * * *
- - - -
* * *
- -
*
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n=5;
    int p=0;
   for(i=1;i<2*n;i++){
    (i<=n)?p++:p--;
    for(j=1;j<=p;j++){
    if(i%2==0) {  cout<<"- "; }
    else{  cout<<"* "; }
    }
   cout<<endl; 
   }
}
