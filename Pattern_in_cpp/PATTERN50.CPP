/*
* 2 3 4 * 
1 * 3 * 5
1 2 * 4 5
1 * 3 * 5
* 2 3 4 *
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n=5;
   for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
     if(i==j || (i+j)==n+1){
        cout<<"* ";
     }
     else{
        cout<<j<<" ";
     }
     }
   cout<<endl;
   }
}