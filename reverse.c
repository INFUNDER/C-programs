#include <stdio.h>
int main()
{
    int x,i,rev=0;
    printf("enetr the no.=");
    scanf("%d",&x);
    while (x>0)
    {
         i=x%10;
        rev=rev*10+i;
         x=x/10;
    }
    printf("%d",rev);
    }
    
   
