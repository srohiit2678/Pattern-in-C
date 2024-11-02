/*
* * * * * * * * * * * 
 * * * * * * * * * *   
  * * * * * * * * *    
   * * * * * * * *     
    * * * * * * *      
     * * * * * *       
      * * * * * 
       * * * *
        * * *
         * *
          *
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,k,n=11;
   for(i=n;i>=1;i--){
    for(k = 1;k<=n-i;k++){
        cout<<" ";
    }
    for(j=1;j<=i;j++){
        cout<<"* ";
    }
   cout<<endl;
   }
}