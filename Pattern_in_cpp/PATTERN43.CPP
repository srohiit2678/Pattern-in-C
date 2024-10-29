/*
    1
   232
  34543
 4567654
567898765
*/
#include<iostream>
using namespace std;
/*
int main(){
    int i,j,k,n=5,p,p1;
   for(i=1;i<=n;i++){
    p=i;    p1=2*i-2;
    for(k = n;k>i;k--){
        cout<<" ";
    }
    for(j=1;j<2*i;j++){
    if((2*j-1)<=(2*i-1)){
        cout<<p++;
    }
    else{
        cout<<p1++;
    }
    }
   cout<<endl;
   }
}
*/
/*
int main(){
    int i,j,k,n=5,p;
   for(i=1;i<=n;i++){
    p = i-1; 
    for(k = n;k>i;k--){
        cout<<" ";
    }
    for(j=1;j<2*i;j++){
     (j<=i)?p++:p--;
    cout<<p;
    }
   cout<<endl;
   }
}
*/
int main(){
    int i,j,k,n=5,p;
   for(i=1;i<=n;i++){
    p = i-1; 
    for(k = n;k>i;k--){
        cout<<" ";
    }
    for(j=1;j<2*i;j++){
     if(j<=i){cout<<++p;}
     else{cout<<--p;} 
    }
   cout<<endl;
   }
}