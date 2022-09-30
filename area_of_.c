#include <stdio.h>
int main()
{
    int l=10;
    int b=20;
    int h=30;
    int r=20;
    int aot=(b*h)/2;
    int aoc=2*((l*h)+(l*b)+(h*b));
    int aos=l*l;
    float aooc=3.14*(r*r);
    printf("%d \n",aot);
    printf("%d \n",aoc);
    printf("%d \n",aos);
    printf("%f \n",aooc);
    return 0;
}