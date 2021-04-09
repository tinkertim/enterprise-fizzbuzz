#include <stdio.h>
#include "libfizzbuzz.h"

void do_fizz_buzz(void)
{
  unsigned int i;
  TOP_AND_BOTTOM;
  for(i=1 ; i < 101 ; i++)
    printf("| %-3d | %-4s | %-4s |\n", i, i%3 ? "" : "Fizz", i%5 ? "" : "Buzz");
  TOP_AND_BOTTOM;
  return 0;
}
