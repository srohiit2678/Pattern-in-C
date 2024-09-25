//  2-logics
/*
              5
           9  4  
       12  8  3  
    14 11  7  2  
 15 13 10  6  1  
*/

#include <stdio.h>
int main()
{
  int n = 5;
  int p;
  int x=n;
  for (int i=n; i >= 1 ; i--)
  {     p=x;
    for (int j=1; j<= n; j++)
    {
      if(j >= i)
      {  
        printf("%3d",p); p-=(j+1);
      }     
      else
      {
       printf("   "); 
      }
    }       
    x+=i-1;      
     printf("\n");
  }
}


/* ------> logic - 2 <-------

#include<stdio.h>
int main()
{
  int n = 5;
  int p,y;
  int x=n;
  printf("\n");   
  for (int i=n; i >= 1 ; i--)
  {   p = x;
      y = i+1;
    for (int k=i ;k>1; k--) // for space
    { 
      printf("   "); 
    }    
    for (int j = 1; j<= (n+1)-i; j++) // for pattern
    {    
        printf("%3d",p); p -= y++;
    }    
      x+=i-1;
     printf("\n");   
    }              
  }
*/