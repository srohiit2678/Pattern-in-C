/*
   * *         * *
 * * * *     * * * *
* * * * * * * * * * *
* * * * * * * * * * *
  * * * * * * * * *
    * * * * * * * 
      * * * * * 
        * * *     
          *  
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,k,n=5;
    //upper part
   for(i=n/2;i<=n;i+=2){
      for(k=1;k<=n-i;k++){
         cout<<" ";
      }
      for(j=1;j<=i;j++){
      cout<<"* ";
    }    
    for(k=0;k<=n-i;k++){
         cout<<"  ";
      }
    for(j=1;j<=i;j++){
      cout<<"* ";
    }    
      cout<<endl;
    }
    for(j=1;j<=2*n+1;j++){
      cout<<"* ";
    }
    cout<<endl;
    //lower part
 for(i=n+1;i>=1;i--){
 
   for(k=i;k<=n;k++){
      cout<<"  ";
   }
    for(j=1;j<2*i;j++){
     cout<<"* ";
   } 
     cout<<endl;
  }
}