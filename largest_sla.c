#include<stdio.h>
int main()
{
    int i,ar[5],temp=0,la,sla;
    printf("enter the array elements \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&ar[i]);
    }
    la=ar[0];
    sla=ar[1];
    if(sla>la)
    {
       temp=la;
       la=sla;
       sla=temp;
    }
    for(i=2;i<5;i++)
    {
        if(ar[i]>la)
        {
            sla=la;
            la=ar[i];
        }
        else if(ar[i]>sla && ar[i]!=la)
        {
            sla=ar[i];
        }
    }
    printf("the largest no. is %d \n",la);
    printf("second largest no. is %d \n",sla);
}