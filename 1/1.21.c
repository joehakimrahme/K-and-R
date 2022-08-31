#include <stdio.h>
#define TABSTOP 8

int print_tabs(int pos, int count);

int main() {
  int i, c, position;
  position = 0;
  for(i=0; (c=getchar()) != EOF; ++i) {
    if (c == ' ') {
      position = print_tabs(position % TABSTOP, 1);
    }
    else {
      printf("%c", c);
    }
    if (c == '\n') {
      position = 0;
    } else {
      position++;
    }
  }
  return 0;
}

int print_tabs(int pos, int count) {
  int c, i, distance;
  while ((c=getchar()) == ' ') {
    count++;
  }
  for(i=0; i<(count+pos)/TABSTOP; i++) {
    printf("\t");
  }
  for(i=0; i<(count+pos)%TABSTOP; i++) {
    printf(" ");
  }
  printf("%c", c);
  return pos + count;
}
