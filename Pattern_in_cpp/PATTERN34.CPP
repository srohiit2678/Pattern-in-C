/*
0 2 3 4 5 
1 0 3 4 5
1 2 0 4 5
1 2 3 0 5
1 2 3 4 0
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n=5;
   for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
    if(i==j){cout<<"0 ";    }  
    else { cout<< j<< " " ; }
    }
   cout<<endl;
   }
}