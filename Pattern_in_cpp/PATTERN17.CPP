/*
1 2 3 4 5 6 7 
2 2 3 4 5 6 7 
3 3 3 4 5 6 7 
4 4 4 4 5 6 7 
5 5 5 5 5 6 7 
6 6 6 6 6 6 7
7 7 7 7 7 7 7 
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n=7;
   for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      if(i>=j){cout<< i<< " "  ;}
     else{cout<< j<<" " ;}
    }
   cout<<endl;
   }
}