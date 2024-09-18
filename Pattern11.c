/*
1 1 1 2 1 3      
2 1 2 2 2 3      
3 1 3 2 3 3      
4 1 4 2 4 3      
5 1 5 2 5 3 
*/
#include<stdio.h>
int main(){


int n = 5;
  for(int i = 1; i <= n; i++)
    {
      for(int j = 1; j <= 3; j++)
        {
            printf("%d %d ",i,j);
                    
      }
      printf("\n");
}


return 0;
}
