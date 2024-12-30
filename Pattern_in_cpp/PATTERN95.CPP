/*
  *     *     *   
    *   *   *
      * * *
        *
* * * * * * * * *     
        *
      * * *
    *   *   *
  *     *     *  
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n=5;
    if(n%2==0)n++;
   for(i=1;i<2*n;i++){
    for(j=1;j<2*n;j++){
 if(i==n || j==n ||(j-i==1 && i<=n)
 || ((i+j==2*n-1) && (i<=n)) 
 || ((i+j==2*n+1)&&(i>n)) 
 ||((i-j==1)&&(i>n))){
     cout<<"* ";}
    else{cout<<"  ";  }
      }
   cout<<endl; 
   }
}