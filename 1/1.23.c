#include <stdio.h>

#define IN 0
#define OUT 1

int main() {
  int c, carry, state;
  carry = 0;
  state = OUT;

  /* Here's some comment */
  while((c=getchar()) != EOF) {
    if (c == '/') {
      if (state == OUT) {
	carry = '/';
      } else if (state == IN) {
	if (carry == '*') {
	  state = OUT;
	  carry = 0;
	}
      }
    } else if (c == '*') {
      if (state == OUT) {
	if (carry == '/') {
	  state = IN;
	}
      } else if (state == IN) {
	carry = '*';
      }
    } else {
      if (state == OUT) {
	putchar(carry);
	carry = 0;
	putchar(c);
      }
    }
  }
  return 0;
}
