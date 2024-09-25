// 3 -logics
/*
              1  
           6  2  
       10  7  3  
    13 11  8  4  
 15 14 12  9  5 
*/

#include <stdio.h>
int main()
{
  int n = 5;
  int p;
  int x=1;
  printf("\n");   
  for (int i=n; i >= 1 ; i--)
  {    p=x;
    for (int k=i ;k>1; k--) // for space
    { 
      printf("   "); 
    }    
    for (int j = 1; j<= (n+1)-i; j++) // for pattern
    {    
        printf("%3d",p); p = ((p-i)-j)+1;
    }    
      x+=i;
     printf("\n");   
    }              
  }


/* ------> logic - 2 <-------

#include<stdio.h>
int main()
{
  int n = 5;
  int p;
  int x=1;
  for (int i=n; i >= 1 ; i--)
  {     p=x;
    for (int j=1; j<= n; j++)
    {
      if(j >= i)
      {  
        printf("%3d",p); p-=j;
      }     
      else
      {
       printf("   "); 
      }
    }       
    x+=i;      
     printf("\n");
  }
}
*/

/* ------> logic - 3 <-------

#include <stdio.h>
int main()
{
  int n = 5;
  int p;
  int x=1;
  int y;
  printf("\n");   
  for (int i=n; i >= 1 ; i--)
  {    p=x;
       y=i;
    for (int k=i ;k>1; k--) // for space
    { 
      printf("   "); 
    }    
    for (int j = 1; j<= (n+1)-i; j++) // for pattern
    {    
        printf("%3d",p); p -=y++;
    }    
      x+=i;
     printf("\n");   
    }              
  }
*/