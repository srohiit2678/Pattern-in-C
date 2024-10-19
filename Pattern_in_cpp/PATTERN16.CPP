/*
1 2 3 4 5 
* * * * *
1 2 3 4 5
* * * * *
1 2 3 4 5
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n=5;
   for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
     if(i%2==1){cout<< j<< " "  ;}
     else{cout<< "* " ;}
   }
   cout<<endl;
   }
}