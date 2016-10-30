#include <stdio.h>

int main()
{
    char str;
    printf("enter a char");
    scanf("%c",&str);
    if(str=='a'||str=='e'||str=='i'||str=='o'||str=='u'||str=='A'||str=='E'||str=='I||str=='O'||str=='U')
    {
        printf("given char is a vowel");
    }
    else
    printf("given char is a constan");
     return 0;
}
