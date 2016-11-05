#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("enter a num");
    scanf("%d",&num);
    if(num&&(num&(num-1))==0)
    printf("%d pow of 2",num);
    else
        printf("%d not pow of 2",num);
    return 0;
}
