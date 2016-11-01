#include <stdio.h>
#include <stdlib.h>

int main()
{
int a=0,b=1,c,d,i;
printf("enter the number ");
scanf("%d",&c);
for(i=0;i<c;i++)
{
    d=a+b;
    a=b;
    b=d;
}
printf("%d",d);
return 0;
}
