#include <stdio.h>
int main()
{
   int a;
   int b;
   int x;
   int y;
   int m;
   int n;
   int q;
   int w;
   int add;
   int sub;
   int mul;
   float div;
   printf("Enter the value of two numbers for: \n");
   printf("ADDITION: \n");
   printf("A = ");
   scanf("%d",&a);
   printf("B = ");
   scanf("%d",&b);
   add=a+b;
   printf("OUTPUT =  " "%d \n ",add);
    

    printf("SUBRACTION: \n");
   printf("A = ");
   scanf("%d",&x);
   printf("B = ");
   scanf("%d",&y);
   sub=x-y;
   printf("OUTPUT = " "%d \n",sub);

    printf("MULTIPLICATION: \n");
   printf("A = ");
   scanf("%d",&m);
   printf("B = ");
   scanf("%d",&n);
   mul=m*n;
   printf("OUTPUT = " "%d \n",mul);

    printf("DIVISION: \n");
   printf("A = ");
   scanf("%d",&q);
   printf("B = ");
   scanf("%d",&w);
   div=q/w;
   printf("OUTPUT = " "%f \n",div);

   return 0;  
}