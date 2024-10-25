/*
1 * 3 * 5 
* 2 * 4 *
1 * 3 * 5
* 2 * 4 *
1 * 3 * 5
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n=5;
   for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
    if((i+j)%2==1){cout<<"* ";}
    else{ cout<< j<< " "  ;}
    
    }
   cout<<endl;
   }
}