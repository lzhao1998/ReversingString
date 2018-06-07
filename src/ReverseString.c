#include <stdlib.h>
#include "ReverseString.h"
#include <stdio.h>

int getStringLength(char *name)
{
  int i = 0;
  while(name[i] != NULL)
  {
    i++;
  }
  return i;
}
/*
char* ReverseString(char *str)
{
  char *result;
  int i = getStringLength(&str);
  int j = 0;
  for(i ; i < 0 ; i--)
  {
    result[j] = str[i];
    j++;
  }
  return result;
}*/
