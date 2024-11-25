/*
1
11
121
1331
14641
*/
#include<iostream>//11
using namespace std;  
/*
int main(){
    int i,j,k=1,n=5;
   for(i=1;i<=n;i++){
    for(j=1;j<=1;j++){
     cout<<k;
     k*=11;   
      }
   cout<<endl; 
   }
}
*/
int main(){
  int i,j,p=1,n=5;
   for(i=1;i<=n;i++){
    p=1;
    for(j=1;j<=i;j++){
     cout<<p;
     p=p*(i-j)/j;
      }
   cout<<endl; 
   }
}