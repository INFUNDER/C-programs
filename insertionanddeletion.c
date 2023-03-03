#include <stdio.h>
int insertion(int pos,int ele)
{
if(pos > n)
printf("Invalid Input");
else
{
for (int i = n-1; i >= pos-1;i--)
arr[i+1] = arr[i];
arr[pos-1] = ele;
printf("Array after insertion is:\n");
for (i = 0; i <= n; i++)
printf("%d\n", arr[i]);
return 0;
}
}
int main()
{
    printf("enter the size \n");
int n;
scanf(" %d",&n);
int arr[n];
int i;
printf("enter the array elemnts \n");
for(i = 0; i < n; i++)
{
scanf("%d",&arr[i]);
}
printf("enter the position where you wnat to insert the array \n");
int pos;
scanf("%d",&pos);
printf("enter the number you want to insert \n ");
int ele;
scanf("%d",&ele);

return 0;
}