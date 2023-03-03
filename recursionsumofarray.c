#include <stdio.h>
int fn(int a[],int n)
{
    if(n<=0)
    return 0;
    else 
    return (fn(a,n-1)+a[n-1]);
}
int main()
{
    int n,a[]={1,2,3,4,5};
    n=sizeof a / sizeof a[0];
    int sum=fn(a,n);
    printf("%d",sum);
}

    

