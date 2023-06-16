#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

#define MAXLINE 1000

void itoa(int n, char s[], int width);
void reverse(char s[]);

int main() {
  char result[MAXLINE] = {0};
  int largestNegative = INT_MIN;  // Get the largest negative number using INT_MIN
  itoa(largestNegative, result, 5);
  printf("%s\n", result);
  itoa(54, result, 5);
  printf("%s\n", result);
  itoa(-54, result, 5);
  printf("%s\n", result);

  return EXIT_SUCCESS;
}

void itoa(int n, char s[], int width) {
  int i=0;
  int digit;
  int negative = n < 0;

  do {
    digit = negative ? -(n % 10) : (n%10);
    n /= 10;
    s[i++] = digit + '0';  // Convert to character and store
  } while (n != 0);

  if (negative) {
    s[i++] = '-';
  }

  while (i < width) {
    s[i++] = ' ';
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
