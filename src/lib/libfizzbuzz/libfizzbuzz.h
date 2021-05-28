#ifndef LIBFIZZBUZZ_H
#define LIBFIZZBUZZ_H

/**
 * Controls how the 'printed' iteration list is styled on the top and bottom.
 * Can be overridden via defining the constant on the command line.
 */
#ifndef TOPS_AND_BOTTOMS
#define TOPS_AND_BOTTOMS printf("+-----+------+------+\n");
#endif // TOPS_AND_BOTTOMS

/* Public Prototypes */
void do_fizz_buzz(unsigned int);
void fizz_buzz(void);

#endif /* LIBFIZZBUZZ_H */
