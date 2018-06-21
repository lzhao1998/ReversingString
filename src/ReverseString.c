#include <stdlib.h>
#include "ReverseString.h"
#include <stdio.h>
#include <string.h>

int getStringLength(char *name)
{
  int i = 0;
  if(name == '\0')
  {
    return 0;
  }
  while(name[i] != NULL)	// '/0' also consider as NULL
  {
    i++;
  }
  return i;
}

char *ReverseString(char *str)
{
  int i;
  int length = getStringLength(str);	// Get the string length into i
//  char *temp = (char*)malloc((length-1)*sizeof(char));
  char *temp;
  temp = (char *)malloc(length + 1);
//  free(temp);
  char *stringRead = str;		// Let the string store into pointer
  for(i = 0; i < length ; i++)
  {
	  // Reverse the string by storing the letter 1 by 1 from backward to the temp
	  // Minus 1 is because starting count value is from 0
	  temp[i] = stringRead[(length-i-1)];
    printf("temp is %s\n",temp);
  }

  //put NULL after the last character to avoid unnesssary thing
  temp[i] = '\0';
  return temp;
}
