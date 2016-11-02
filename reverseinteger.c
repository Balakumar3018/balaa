#include <stdio.h> 
 #include <stdlib.h> 
int main() 
{ 
     int num,rev=0,a; 
    printf("enter the number"); 
    scanf("%d",&num);  
   while(num!=0) 
   { 
        a=num%10; 
        rev=rev*10+a; 
       num=num/10;  
     } 
  printf("%d",rev); 
  return 0;
  }
