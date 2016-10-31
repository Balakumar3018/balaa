#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b=0;
    printf("enter  number");
    scanf("%d",&a);
    while(a!=0)
    {
        a=a/10;
        b=b+1;

      }
      printf("%d no is",b);
    return 0;
}
