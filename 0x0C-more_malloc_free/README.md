# Do I cast the result of malloc?

In this question, someone suggested in a comment that I should not cast the result of malloc. i.e., I should do this:
~~~~
int *sieve = malloc(sizeof(*sieve) * length);
~~~~
rather than:
~~~~
int *sieve = (int *) malloc(sizeof(*sieve) * length);
~~~~
Why would this be the case?

cmalloccasting

* It is unnecessary, as void * is automatically and safely promoted to any other pointer type in this case.
* It adds clutter to the code, casts are not very easy to read (especially if the pointer type is long).
* It makes you repeat yourself, which is generally bad.
* It can hide an error if you forgot to include <stdlib.h>. This can cause crashes (or, worse, not cause a crash until way later in some totally different part of the code). Consider what happens if pointers and integers are differently sized; then you're hiding a warning by casting and might lose bits of your returned address. Note: as of C99 implicit functions are gone from C, and this point is no longer relevant since there's no automatic assumption that undeclared functions return int.
