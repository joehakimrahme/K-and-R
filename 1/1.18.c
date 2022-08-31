#include <stdio.h>
#define MAXLINE 1000

int ggetline(char s[], int lim);
void prune(char s[], int size);

/* In this version, the original line is overwritten.
 * I don't see any immediate problem with it.
 */

int main() {
  int i;
  char line[MAXLINE];
  while ((i = ggetline(line, MAXLINE)) > 0) {
    prune(line, i);
    printf("%s", line);
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

void prune(char s[], int size) {
  int i;
  for(i=size-1; s[i] == '\n' || s[i] == '\t' || s[i] == ' '; i--) {
  }
  s[i+1] = '\0';
}
