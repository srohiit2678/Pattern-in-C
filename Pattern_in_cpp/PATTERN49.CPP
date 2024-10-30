/*
* * * * * * * * * * * 
* *     *   *     * *  
*   * *       * *   *  
*   * *       * *   *  
* *     *   *     * *  
*         *         * 
* *     *   *     * *  
*   * *       * *   *  
*   * *       * *   *  
* *     *   *     * *  
* * * * * * * * * * * 
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n=11 ;
   for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
    if(i==1 || j==1 || i==n || j==n
 || i==j || j==(n+1)-i || (i+j)==(n/2+2)
    || (j-i)==(n/2) || (i-j)==(n/2)  
    || (i+j)==(n+n/2+1))
    { cout<< "* " ; }
    else{
        cout<<"  ";
    }                                                                                        
     }
   cout<<endl;
   }
}