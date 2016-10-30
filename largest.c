#include <stdio.h>
int main()
{
    int i,j,k;
    printf("enter three numbers");
    scanf("%d%d%d",&i,&j,&k);
    if(i>=j&&i>=k)
    printf("largest no is%d",i);
    else if(j>=i&&j>=k)
    printf("largest no is %d",j);
    else
    printf("largest no is %d",k);
    return 0;
}
