/*
      *       
        *
          *   
* * * * * * *
          *
        *
      *       
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n=4;
   for(i=1;i<2*n;i++){
    for(j=1;j<2*n;j++){   
    if(i==n ||(j-i==n-1) ||
     (i+j==(2*n+n-1))){
        cout<<"* ";  }
     else{cout<<"  ";  }
      }
   cout<<endl; 
   }
}
