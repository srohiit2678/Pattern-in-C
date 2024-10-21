/*
0 
1 2
3 4 0
1 2 3 4
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n=4,k=5;
   for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
     cout<< k++%5<< " "  ;
     //k++;
    }
   cout<<endl;
   }
}