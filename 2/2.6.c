#include <stdio.h>

unsigned int setbits(unsigned int x, int p, int n, unsigned int y);

int main() {
  unsigned int a = 0xfa6f;
  unsigned int b = 0xc5c9;
  printf("%d\n", setbits(a, 8, 4, b));


  return 0;
}

unsigned int setbits(unsigned int x, int p, int n, unsigned int y) {
  return ((~(~((unsigned int) 0) << n) & y) << (p+1-n)) | (~(~(~((unsigned int) 0) << n) << (p-n+1)) & x);
}
