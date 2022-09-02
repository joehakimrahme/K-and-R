#include <math.h>
#include <stdio.h>

#define MAXLINE 1000

int htoi_single(char c);

int main() {
  char c;
  int i, size, total;
  char octal[MAXLINE];

  for(size=0; (c=getchar()) != EOF && c != '\n'; ++size) {
    i = htoi_single(c);
    /* Throw an error in case of illegal characters */
    if (i == -1) {
      printf("ERROR: Malformed input %c\n", c);
      return 1;
    }
    if (c == 'x') {
      if (size == 1 && octal[0] == 0) {
	i = 0; /* 'x' is legal on the second digit (assuming the first
		  was 0. Handle it silently. */
      } else {
	printf("Error: Malformed input 'x'\n");
	return 2;
      }
    }
    octal[size] = i;
  }

  total = 0;
  for (i=1; i <= size; ++i) {
    if (octal[size-i] != 'x') {
      total += (octal[size-i] * pow(16, i-1));
    }
  }
  printf("%d\n", total);
  return 0;
}

int htoi_single(char c) {
  const char alphabet[] = "0123456789abcdefx";
  int i;
  for (i=0; alphabet[i] != '\0'; ++i) {
    if (c == alphabet[i]) {
      return i;
    }
  }
  return -1; /* Invalid character */
}
