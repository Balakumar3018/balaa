#include <stdio.h>
#include <stdlib.h>

int main()
{   char s[10];
 	printf("enter a day");
 	scanf("%s",&s);
 	if(strcmp(s,"monday")==0)
 	   printf("true");
 	else if(strcmp(s,"tuesday")==0)
        printf("true");
 	else if(strcmp(s,"wednesday")==0)
      printf("true");
    	else if(strcmp(s,"thursday")==0)
      printf("true");
      	else if(strcmp(s,"friday")==0)
      printf("true");
      	else if(strcmp(s,"saturday")==0)
      printf("true");
      else if(strcmp(s,"sunday")==0)
 	printf("false");
 	else
        printf("invalid input");
return 0;

}
