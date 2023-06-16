#include <stdio.h>
#define MAXLINE 1000

int include(char s[], char c);
void squeeze(char s1[], char s2[]);

int main() {

  char word[] = "hello world";
  char banned[] = "ol";

  squeeze(word, banned);
  printf("%s\n", word);

  return 0;
}


int include(char s[], char c) {
  int i;
  for(i=0; s[i] != '\0'; ++i) {
    if (s[i] == c) {
      return 1;
    }
  }
  return 0;
}

void squeeze(char s1[], char s2[]) {
  int i, j;
  j = 0;
  for (i=0; s1[i] != '\0'; i++) {
    if (!include(s2, s1[i])) {
      s1[j++] = s1[i];
    }
  }
  s1[j] = '\0';
}
