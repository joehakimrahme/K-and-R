#include <stdio.h>
#define LINEFOLD 80
#define MAXWORDSIZE 1000


int main() {
  int c=0, position=0, idx=0;
  char word[MAXWORDSIZE];

  while(c != EOF) {
    c = getchar();
    if (c == ' ' || c == EOF || c == '\n') {
      word[idx] = '\0';
      if (position + idx > LINEFOLD) {
        putchar('\n');
        position = 0;
      }
      printf("%s", word);
      if (c != EOF) {
        putchar(c);
      }
      if (c == '\n') {
        position = 0;
      }
      position += idx+1;
      idx=0;
    } else {
      word[idx++] = c;
    }
  }
  return 0;
}
