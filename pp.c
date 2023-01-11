#include <stdio.h>
int main()
    {
        int n,flag,i,j;
        printf("enter the range");
        scanf("%d",&n);
        for(i=2;i<=n;i++)
        {
            flag=0;
            for( j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    flag++;
                    break;
                }
            }
            if(flag==0)
            {
                printf("%d \n",i);
                
            }
           
        }
         
         return 0;

    }