#include <stdio.h>
int main()
{
char c;
printf("enter a char ");
scanf("%c",&c);
if(c>=65&&c<=122)
printf("given char is a alphabet");
else 
printf("not alphabet");
return 0;
}
