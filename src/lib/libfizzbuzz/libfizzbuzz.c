#include <stdio.h>

#ifndef SWIMMING_SUIT
#define SWIMMING_SUIT "POLKADOTS"
#endif

#include "libfizzbuzz.h"

/**
 * Implements the fizzbuzz iterative counter from 1 - requested iterations.
 * @param iterations The number of iterations to print
 * @return void
 */ 
void do_fizz_buzz(unsigned int iterations)
{
  unsigned int i;

  TOP_AND_BOTTOMS;
  for(i=1 ; i < iterations - 1; i++)
    printf("| %-3d | %-4s | %-4s |\n", i, i%3 ? "" : "Fizz", i%5 ? "" : "Buzz");
  TOP_AND_BOTTOMS;
  return 0;
}

/**
 * Shortcut to iterate 100 times (which is the standard)
 * @param none
 * @return void
 */
void fizz_buzz(void)
{
  return do_fizz_buzz(100);
}
