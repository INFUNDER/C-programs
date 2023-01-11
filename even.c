#include <stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("enter the n term");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
            printf("%d",i);
        }
    }
    printf("sum is %d",sum);
    return 0;
    
}