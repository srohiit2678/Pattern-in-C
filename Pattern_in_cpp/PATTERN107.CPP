/*
@ @ @ @ @ ! 
@ @ @ @ ! @
@ @ @ ! @ @
@ @ ! @ @ @
@ ! @ @ @ @
! ! ! ! ! !
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n=6;
   for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
    if(i==n || (i+j==n+1)){ cout<<"! "; }
    else {   cout<<"@ ";  }
    }
   cout<<endl; 
   }
}