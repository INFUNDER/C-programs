#include <stdio.h>
int main()
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
  printf("PERCENTAGE =  ""%f",per);
  return 0; 

 
}