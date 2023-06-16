#include <stdio.h>

int bitcount(unsigned x) {
  int b = 0;
  while(x) {
    x &= (x-1);
    b++;
  }
  return b;
}

int main() {
  printf("%d\n", bitcount(0x00));
  printf("%d\n", bitcount(0xfa));
  printf("%d\n", bitcount(0xaa));
  printf("%d\n", bitcount(0xff));
  printf("%d\n", bitcount(0xa5));
  return 0;
}
