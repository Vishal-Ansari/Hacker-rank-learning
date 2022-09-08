#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

  char s[1000], i;
  printf("enter the string\n");
  gets(s);
  //Write your logic to print the tokens of the sentence here
  // for(char *c=s;*c!='\0';c++)
  // {
  //   if(*c==' ')
  //   {
  //     *c='\n';
  //   }
  // }
  // printf("%s",s);
  for (i = 0; s[i] != '\0'; i++)
  {
    if (s[i] == ' ') 
    {
      s[i]='\n';
    }
  }
  printf("%s",s);
  return 0;
}