// 2 logics

#include <stdio.h>

int main()
{
  int n = 5;
  for (int i=0; i < n ; i++)
  {  
    for (int j =i; j< n; j++)
    {  
      printf("%2d ",i%2);
    }                  
     printf("\n");
  }
}



/*

#include <stdio.h>

int main()
{
  int n = 5;
  for (int i= n+1; i >=2 ; i--)
  {  
    for (int j = 5; j>=7-i; j--)
    {  
      printf("%2d ",i%2);
    }                  
     printf("\n");
  }
}


*/