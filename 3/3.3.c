#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 1000

void expand(char s1[], char s2[]);


int main() {
  char result[MAXLINE] = {32};
  expand("2-5-7", result);
  printf("%s\n", result);
  return EXIT_SUCCESS;
}

void expand(char s1[], char s2[]) {
  int i=0, j=0, k=0;
  char latest = '0';
  char end = '0';

  while(s1[i] != '\0') {
    if (s1[i] == '-') {
      end = s1[++i];
      for (k=latest+1; k<=end; k++) {
	s2[j] = k;
	latest=s2[j++];
      }
    } else {
      latest = s1[i];
      s2[j++] = s1[i];
    }
    i++;
  }
  s2[j] = '\0';
}
