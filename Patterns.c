#include<stdio.h>
// 2 logic

int main(){

int n = 5 ,k;
  for(int i = 1; i <= n; i++)
    {
          k=i;

      for(int j = 1; j <= n; j++)
        {

            printf("%3d",k);
              k+=n;
      }
      printf("\n");
}

return 0;
}

/*
---> 2nd logic <-----

int n = 5 ,k;
  for(int i = 1; i <= n; i++)
    {
          k=i;

      for(int j = i; j <n+i; j++)
        {

            printf("%3d",k);
              k+=n;
      }
      printf("\n");
}


*/

















// int main()
// { 
//   int n=11;
// for (int i = 1; i <= n; i++)
// {
//   for (int j = 1; j <= n; j++)
//   {
//    if((j-i == (n/2))|| (i-j == (n/2)) || (i+j == (n+(n/2+1))) || (i+j ==(n/2+2)))
//    {
//     printf("* ");
//    }
//    else{
//     printf("  ");
//    }
//   }
//    printf("\n");
// }
// return 0;
// }



// for (int i = 1; i <= 9; i++)
//  { 
//    for (int j = 1; j <=i; j++)
//    {if (i+j<=10)
//    {
   
//     printf("*");
    
//    }
//  } 
//   printf("\n");

// }