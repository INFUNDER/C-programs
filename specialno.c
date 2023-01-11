#include <stdio.h>
int main()
{
    int n,i,f,r,sum=0;
    printf("enetr the no.");
    scanf("%d",&n);
    int q=n;
    while(n>0)
    {
      r=n%10;
      f=1;
      for(i=1;i<=r;i++)
        {
            f=f*i;
        }
        sum=sum+f;
        n=n/10;
    }
    if(sum==q)
    {
        printf("special no.");
    }
    else
    {
        printf("not a special no.");
    }
    return 0;
}
