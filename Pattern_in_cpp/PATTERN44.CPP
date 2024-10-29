/*
    5
   545
  54345
 5432345
543212345
*/
#include<iostream>
using namespace std;
/*
int main(){
    int i,j,k,n=5,p,p1;
   for(i=1;i<=n;i++){
    p=n;    p1=(n+1)-i;
    for(k=n;k>i;k--){
        cout<<" ";
    }
    for(j=1;j<2*i;j++){
   if(p>=(n+1)-i) {cout<<p--;}
    else{ cout<< ++p1  ;}
    }
   cout<<endl;
   }
}
*/
int main(){
    int i,j,k,n=5,p;
   for(i=1;i<=n;i++){
    p = n+1; 
    for(k = n;k>i;k--){
        cout<<" ";
    }
    for(j=2*i-1;j>=1;j--){
     (j>=i)?p--:p++;
    cout<<p;
    }
   cout<<endl;
   }
}