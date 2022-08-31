#include <stdio.h>
#define MAXLINE 1000

int ggetline(char s[], int lim);
void reverse(char s[], char r[], int size);

int main() {
  int i;
  char line[MAXLINE];
  char reversedline[MAXLINE];
  while ((i = ggetline(line, MAXLINE)) > 0) {
    reverse(line, reversedline, i);
    printf("%s", reversedline);
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

void reverse(char s[], char r[], int size) {
  int i;
  r[size--] = '\0';
  if (s[size] == '\n') {
    r[size--] = '\n';
  }
  for (i=0; i<=size; i++) {
    r[size-i] = s[i];
  }
}
