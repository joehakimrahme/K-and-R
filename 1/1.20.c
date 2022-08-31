#include <stdio.h>
#define TABSTOP 4


int main() {
  int c, i, j;
  for(i=0; (c=getchar()) != EOF; ++i) {
    if (c == '\t') {
      c = ' ';
      for (j=0; j<(TABSTOP - (i % TABSTOP) - 1); j++) {
	printf(" ");
      }
    }
    if (c == '\n') {
      i=-1;
    }
    printf("%c", c);
  }
  return 0;
}
