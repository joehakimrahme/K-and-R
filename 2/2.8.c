#include <limits.h> /* requires -D_GNU_SOURCE */
#include <stdio.h>

unsigned int rot(unsigned int x, int n);
int main() {
  unsigned int a = 0xF48A319C;
  unsigned int b = 0xcf48a319;
  printf("%d:\t%d\n", rot(a, 4), b);
  return 0;
}

unsigned int rot(unsigned int x, int n) {
  return (x >> n) | (x << (WORD_BIT-n));
}
