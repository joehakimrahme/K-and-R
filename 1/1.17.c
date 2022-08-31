#include <stdio.h>
#define MAXLINE 10000

int ggetline(char s[], int lim);

int main() {
  int i;
  char line[MAXLINE];
  while((i = ggetline(line, MAXLINE)) > 0) {
    if (i >= 80) {
      printf("%s", line);
    }
  }
  return 0;
}

int ggetline(char s[], int lim) {
  int c, i;
  for (i=0; i<lim-1 && (c=getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}
