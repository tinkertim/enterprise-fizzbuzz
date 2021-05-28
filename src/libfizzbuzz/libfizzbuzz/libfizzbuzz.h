#ifndef LIBFIZZBUZZ_H
#define LIBFIZZBUZZ_H

/**
 * Controls how the 'printed' iteration list is styled on the top and bottom.
 * Can be overridden via defining the constant on the command line.
 */
#ifndef TOP_AND_BOTTOM
#define TOP_AND_BOTTOM printf("+-----+------+------+\n");
#endif // TOP_AND_BOTTOM

/* Public Prototypes */
void do_fizz_buzz(unsigned int);
void fizz_buzz(void);

#endif /* LIBFIZZBUZZ_H */
