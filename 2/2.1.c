#include <float.h>
#include <limits.h>
#include <stdio.h>


int main() {

  printf("========== <limits.h> =========\n");
  printf("---- char ----\n");
  printf("Number of bits\t\t: %d\n", CHAR_BIT);
  printf("Value range:\t\t: [%d...%d]\n", CHAR_MIN, CHAR_MAX);
  printf("Value range (signed)\t: [%d...%d]\n", SCHAR_MIN, SCHAR_MAX);
  printf("Value range (unsigned)\t: [0...%d]\n", UCHAR_MAX);

  printf("---- int ----\n");
  printf("Number of bits\t\t: %d\n", WORD_BIT); /* Needs to be compiled with -D_GNU_SOURCE */
  printf("Value range:\t\t: [%d...%d]\n", INT_MIN, INT_MAX);
  /* printf("Value range (signed)\t: [%d...%d]\n", SINT_MIN, SINT_MAX); */
  printf("Value range (unsigned)\t: [0...%d]\n", UINT_MAX);


  printf("========== computed =========\n");
  char a=0;
  signed char b=0;
  unsigned char c=0;
  printf("%d / %d / %d\n", --a, --b, --c);
  /* printf("Maximum value: %d\n", CHAR_MAX); */
  /* printf("Minimum value: %d\n", CHAR_MIN); */
  /* printf("Maximum value (signed): %d\n", SCHAR_MAX); */
  /* printf("Minimum value (signed): %d\n", SCHAR_MIN); */
  /* printf("Maximum value (unsigned): %d\n", UCHAR_MAX); */
  /* printf("Minimum value (unsigned): %d\n", 0); /\* unsigned min is always zero *\/ */
  /* printf("INT_MAX */
  /* printf("INT_MIN */
  /* printf("LONG_MAX */
  /* printf("LONG_MIN */
  /* printf("SCHAR_MAX */
  /* printf("SCHAR_MIN */
  /* printf("SHRT_MAX */
  /* printf("SHRT_MIN */
  /* printf("UCHAR_MAX */
  /* printf("UINT_MAX */
  /* printf("ULONG_MAX */
  /* printf("USHRT_MAX */
  /* printf("FLT_MAX */
  /* printf("-FLT_MAX */
  /* printf("FLT_MIN */
  /* printf("-FLT_MIN */
  /* printf("DBL_MAX */
  /* printf("-DBL_MAX */
  /* printf("DBL_MIN */
  /* printf("-DBL_MIN */

  return 0;
}
