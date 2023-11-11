#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strindex(char s[], char t);

int main() {
  printf("%d\n",strindex("hello", 'h'));
  printf("%d\n",strindex("hello", 'e'));
  printf("%d\n",strindex("hello", 'l'));
  printf("%d\n",strindex("hello", 'o'));
}

int strindex(char s[], char t) {
  int i, value=-1;
  for (i=0; i<strlen(s); i++) {
    if (s[i] == t) {
      value = i;
    }
  }
  return value;
}
