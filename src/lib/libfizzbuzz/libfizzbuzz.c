#include <stdio.h>
#include "libfizzbuzz.h"

#ifndef TOP_AND_BOTTOM
#define TOP_AND_BOTTOM printf("+-----+------+------+\n");
#else
#error "How much time are you going to spend on a stupid interview question?"
#endif
int main(void)
{
  unsigned int i;
  TOP_AND_BOTTOM;
  for(i=1 ; i < 101 ; i++)
    printf("| %-3d | %-4s | %-4s |\n", i, i%3 ? "" : "Fizz", i%5 ? "" : "Buzz");
  TOP_AND_BOTTOM;
  return 0;
}
