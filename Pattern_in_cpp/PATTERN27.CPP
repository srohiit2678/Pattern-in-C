/*
1 
2 3
5 7 11
13 17 19 23
29 31 37 41 43
*/
#include<iostream>
using namespace std;
int prime(int n){
    int c=0;
    for(int i=2;i<n/2+1;i++){
        if(n%i==0){c=1;}
       }
       return c;
}
int main(){
    int i,j,n=5;
   int p=1;
   for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
      while(prime(p)){
        p++;
        }
     cout<< p++<< " "  ;
    }
   cout<<endl;
   }
}