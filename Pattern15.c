/*
  5  6 15 16 25
  4  7 14 17 24  
  3  8 13 18 23  
  2  9 12 19 22  
  1 10 11 20 21  
*/
#include<stdio.h>
// 2 logic

int main(){

int n = 5 ,k,c=0;

  for(int i = n; i >= 1; i--)
     {
        k= i;
        c++;
      for(int j = 1; j <=n; j++)
        {
            printf("%3d",k);
          if(j%2==1){
            k += (c*2)-1;
          }
          else{
           k += 10-(c*2-1);
          }
                
      }
      printf("\n");
}

 
}


/*

---> 2nd logic <-----


int n = 5 ,k,l;
  for(int i = 1; i <= n; i++)
    {
          k= i;
          l=n-i+1;

      for(int j = 1; j <n; j++)
        {
            if(j%2 == 0){
             printf("%3d",k);
            }
            else{
              printf("%3d",l);
            }
        k +=n;
        l +=n;
      }
      printf("\n");
}

*/











/*
int n = 5 ,a,b,c;
  for(int i = 0; i < n; i++)
    {
          printf("1 ");
          a=0;
          b=1;
      for(int j = 1; j <= i; j++)
        {
            c = a+b;    
            printf("%d ",c);
              a=b;
              b=c;
              c=a;
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