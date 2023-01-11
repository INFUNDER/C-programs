#include <stdio.h>
int main()
{
    int n,i,rev=0;
    printf("enetr the number = ");
    scanf("%d",&n);
    while (n!=0)
    {
        int j=n%10;
        rev=rev*10+j;
        n=n/10;
    }
    
    while(rev!=0)
    {
       i=rev%10;
    switch (i)
    {
    case 1:
       printf("one ");
        break;

        case 2:
    
       printf("two ");
        break;

        case 3:
    
       printf("three ");
        break;

        case 4:
        printf("four ");
        break;

        case 5:
       printf("five ");
        break;

        case 6:
      printf("six ");
        break;

        case 7:
    
       printf("seven ");
        break;

        case 8:
    printf("eight ");
        break;
    
    case 9:
    printf("nine ");
        break;
        
        
    default:
    printf("zero ");
    }
    rev=rev/10;
}
}
