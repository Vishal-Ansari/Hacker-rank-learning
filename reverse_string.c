#include <stdio.h>
#include<string.h>
int
main ()
{
  char sen1[50];
  char *ptr1;
  ptr1 = sen1;
  
  printf("enter the sentence \n");
  fgets(sen1,50,stdin);
  char *strrev(char *sen1);
  printf("%s",strrev (sen1));

  return 0;
}