/*
      A
     BBB
    CCCCC
   DDDDDDD
  EEEEEEEEE
   FFFFFFF
    GGGGG
     HHH
      I
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,k,n=5,p=n+1,p1=-1;
    char ch=65;
   for(i=1;i<2*n;i++){
    (i<=n)?p--:p++;
    for(k=0;k<=p;k++){
        cout<<" ";
    }
    (i<=n)?p1+=2:p1-=2;
    for(j=1;j<=p1;j++){
        cout<<ch;
      } 
      ch++;
      cout<<endl;
   }
}