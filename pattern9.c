#include<stdio.h>

int main()
{
  int n = 5;
  for(int i = 1; i <= n; i++)
    {
      for(int j = 1; j <= n; j++)
        {
          {
            printf("%3d",i*j); // --> %3d = here 3 is widht of element with space (_345 = %4d)
         
          }
      }
      printf("\n");
}
return 0;
}
