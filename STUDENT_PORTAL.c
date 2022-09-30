#include <stdio.h>
int main()
{

int sap;
int x;
printf("ENTER YOUR SAP ID \n");
printf("SAP ID: ");
scanf("%d",&sap);
if (sap==500099918)
{
    printf("WELCOME RONIT \n");
}
else
{
    printf("WELCOME USER \n");
}
printf("WHAT WOULD YOU LIKE TO DO \n");
printf("CALCULATER           press 1 \n");
printf("PERCENTAGE           prrss 2 \n");
printf("SIMPLE INTEREST      press 3 \n");
scanf("%d",&x);
if(x==1)
{
   int a,b,x,y,m,n,q,w,add,sub,mul;
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

}
else if(x==2)
{
  int m1;
  int m2;
  int m3;
  int m4;
  float per;
 
  printf("ENTER YOUR MARKS: \n");
  printf("ENGLISH = ");
  scanf("%d",&m1);
  printf("MATHS = ");
  scanf("%d",&m2);
  printf("COMPUTER = ");
  scanf("%d",&m3);
  printf("SCIENCE = ");
  scanf("%d",&m4);
  per=(m1+m2+m3+m4)*100/400;
  printf("PERCENTAGE =  ""%f \n",per);
}
else
{
       int p;
    int r;
    int t;
    float si;
    printf("ENTER PRINCIPLE = \n");
    scanf("%d",&p);
    printf("ENTER RATE = \n");
    scanf("%d",&r);
    printf("ENTER TIME = \n");
    scanf("%d",&t);
    si=(p*r*t)/100;
    printf("SIMLPE INTEREST = ");
    printf("%f \n",si);
}
printf("-----THANKYOU------"); 
return 0;
 
}
