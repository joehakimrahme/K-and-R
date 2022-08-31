#include <stdlib.h>
#include <stdio.h>


int main()
{
  int c;
  /* If there's something in stdin, the program should print 1. If nothing is provided, 0 */
  printf("%d\n", c = getchar() != EOF);
  return EXIT_SUCCESS;
}
