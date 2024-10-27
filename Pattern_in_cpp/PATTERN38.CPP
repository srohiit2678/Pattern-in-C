/*
1 2 3 4 5 
1 2 3 4 5
3 6 9 12 15
2 4 6 8 10
5 10 15 20 25
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n=5;
   for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
    if(i%2==0){
     cout<<(i/2*j)<<" ";}
    else{ cout<< i*j<< " "  ;}  
    }
   cout<<endl;
   }
}