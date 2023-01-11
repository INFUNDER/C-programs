#include <stdio.h>
int main()
{
    int n,i,sum=0,cal=0;
    printf("enetr your no.");
    scanf("%d",&n);
    while(n!=0)
    {
        i=n%10;
        cal=i*i*i;
        n=n/10;
    }
    if(sum==n)
    {
        printf("Amstromg no.");
    }
    else{
        printf("not an amstong no.");
    }
    return 0;
}