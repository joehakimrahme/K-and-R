#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 1000

void itob(int n, char s[], int base);
void reverse(char s[]);

char alphabet[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main() {
  char result[MAXLINE] = {0};
  itob(INT_MIN, result, 16);
  printf("%s\n", result);
  return EXIT_SUCCESS;
}

void itob(int n, char s[], int base) {
  int i=0;
  int negative = n < 0;

  do {
    s[i++] = alphabet[negative ? -(n % base) : (n%base)];
    n /= base;
  } while (n != 0);

  if (negative) {
    s[i++] = '-';
  }
  s[i] = '\0';
  reverse(s);
  return;
}

void reverse(char s[]) {
  uint i, j;
  char _swap;

  j = strlen(s)-1;

  for (i=0; i<strlen(s)/2; i++,j--) {
    _swap = s[i];
    s[i] = s[j];
    s[j] = _swap;
  }
}
