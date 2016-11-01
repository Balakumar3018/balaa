#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,rev=0,a,k;
    printf("enter the number");
    scanf("%d",&num);
    k=num;
    while(num!=0)
    {
        a=num%10;
        rev=rev*10+a;
        num=num/10;

    }
   printf("%d",rev);
    if(k==rev)
    printf("palll");
    else
        printf("not");
    return 0;
}
