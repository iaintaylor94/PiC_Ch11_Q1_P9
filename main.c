// More on pointers and functions

#include <stdio.h>

// Declare Functions
void exchange (int * const, int * const);

int main(void) {

  int i1 = -5, i2 = 66, *p1 = &i1, *p2 = &i2;

  printf ("i1 = %d, i2 = %d\n", i1, i2);

  exchange (p1,p2);
  printf ("i1 = %d, i2 = %d\n", i1, i2);

  exchange (&i1, &i2);
  printf ("i1 = %d, i2 = %d\n", i1, i2);
  
  return 0;
}

// Define Functions
void exchange (int * const pint1, int * const pint2) {
  int temp;

  temp = *pint1;
  *pint1 = *pint2;
  *pint2 = temp;
}