#include<stdio.h>
void main()
{
int a;
printf("enter a year ");
scanf("%d",&a);
if(a%4==0)
  printf("%d is a leap year");
  else
    printf("%d is not leap year");
  getch();
}

