/*
          0 
        0 1 0
      0 2 3 4 0        
    0 5 6 7 8 9 0      
  0 10 11 12 13 14 15 16 0
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,k,n=5;
    int p=1;
   for(i=1;i<=n;i++){
    for(k = n;k>=i;k--){
        cout<<"  ";
    }
    for(j=1;j<2*i;j++){
     if(j==1 || j == (2*i-1)){
        cout<<"0 ";
     }
    else{
     cout<< p++<< " "  ;    
    }  
    }
   cout<<endl;
   }
}