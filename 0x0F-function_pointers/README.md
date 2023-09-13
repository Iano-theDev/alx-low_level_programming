# POINTERS TO FUNCTIONS

* Using pointers to store the adress in memory of a function
* Parentheses are important when declaring function pointers
  ** they make the difference between function declaration and
  ** function pointer declaration due to operator precedence
  ** the '()' take precedence over '*'.

* We can use functio pointers to create high order functions
  ** a good example is a bubble sort function that takes another
  ** function to compare two values before (swapping)/ sorting them

  ** The qsort() function in <stdlib.h> is an implementation of function
  ** pointers, it performs a quick sort based on a user defined compare()
  ** function that is passed as an argument to qsort among other params.

* function pointers point to the code / first byte of the function

