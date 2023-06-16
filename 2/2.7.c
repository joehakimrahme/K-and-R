#include <stdio.h>

unsigned int setbits(unsigned int x, int p, int n, unsigned int y);
unsigned int revert(unsigned int x, int p, int n);

int main() {
  unsigned int a = 0xfa6f;
  /*
   * 1111101001101111
   * 1111101010011111
   */
  printf("%d:\t%d\n", a, revert(a, 7, 4));
  return 0;
}

/* We reuse `setbits` from exercise 2.6 */
unsigned int setbits(unsigned int x, int p, int n, unsigned int y) {
  return ((~(~((unsigned int) 0) << n) & y) << (p+1-n)) | (~(~(~((unsigned int) 0) << n) << (p-n+1)) & x);
}

unsigned int revert(unsigned int x, int p, int n) {
  unsigned int mask = ~x >> (p+1-n);
  return setbits(x, p, n, mask);
}
