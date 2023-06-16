#include <stdio.h>
#define MAXLINE 1000

void escape(char s[], char t[]);
void descape(char s[], char t[]);

int main() {
  char t1[MAXLINE];
  char s1[] = "hello	world";
  char t2[MAXLINE];
  char s2[] = "hello\tworl\d";
  escape(s1, t1);
  descape(s2, t2);
  printf("%s\n", t1);
  printf("%s\n", t2);
}

void escape(char s[], char t[]) {
  int i = 0;
  int j = 0;
  while (s[i] != '\0') {
    switch(s[i]) {
    case '	':
      t[j++] = '\\';
      t[j++] = 't';
      break;
    default:
      t[j++] = s[i];
      break;
    }
    i++;
  }
  t[j] = '\0';
}

void descape(char s[], char t[]) {
  int i = 0;
  int j = 0;
  while (s[i] != '\0') {
    switch(s[i]) {
    case '\\':
      if (s[++i] == 't') {
	t[j++] = '\t';
      } else {
	t[j++] = '\\';
	t[j++] = s[i];
      }
      break;
    default:
      t[j++] = s[i];
      break;
    }
    i++;
  }
  t[j] = '\0';
}
