#include <stdio.h>
int main()
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
    return 0;

}