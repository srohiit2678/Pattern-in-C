#include<stdio.h>

int main()
{ 
  int n=11;
for (int i = 1; i <= n; i++)
{
  for (int j = 1; j <= n; j++)
  {
   if((j-i == (n/2))|| (i-j == (n/2)) || (i+j == (n+(n/2+1))) || (i+j ==(n/2+2)))
   {
    printf("* ");
   }
   else{
    printf("  ");
   }
  }
   printf("\n");
}

// for (int i = 1; i <= 9; i++)
//  { 
//    for (int j = 1; j <=i; j++)
//    {if (i+j<=10)
//    {
   
//     printf("*");
//     /* code */
//    }
//  } 
//   printf("\n");

// }


return 0;
}
