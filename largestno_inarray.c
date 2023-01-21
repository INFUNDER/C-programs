#include <stdio.h>
int main()
{
    int i,arr[5],l=0;
    printf("enter the array elements \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf(" \n the largest no. is =");
    l=arr[0];
    for(i=1;i<5;i++)
    {
       if(l<arr[i])
       {
         l=arr[i];  
       }
    }
    printf("%d",l);
}