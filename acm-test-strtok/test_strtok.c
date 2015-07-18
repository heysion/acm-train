#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>


int main(char *argc ,char **argv)
{
  char str[100];
  char *input = str;
  char *token;
  char *endptr;
  gets(str);
  while((token = strtok(input," ")) != NULL )
    {
      input = NULL ;
      errno = 0;
      //      int number = atoi(token);
      int number = strtol(token,&endptr,2);
      printf("[%d],%d\n",errno,number);
    }
  return 0;
}
