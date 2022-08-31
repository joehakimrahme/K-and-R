#include <stdio.h>
#define MAXLINE 80 /* maximum input line length */

int ggetline(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */
int main()
{
  int len;  /* current line length */
  int max;  /* maximum length seen so far */
  char line[MAXLINE];  /* current input line */
  char longest[MAXLINE]; /* longest line saved here */

  max = 0;

  while ((len = ggetline(line, MAXLINE)) > 0) {
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  }

  if (max > 0) /* there was a line */
    printf("%s", longest);

  return 0;
}

/* ggetline: read a line into s, return length */
int ggetline(char s[],int lim)
{
   int c, i;
   for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
     s[i] = c;
   if (c == '\n') {
     s[i] = c;
     ++i;
   }
   s[i] = '\0';

   if (i == lim-1) {
     s[i-1] = '\n';
     s[i-2] = '.';
     s[i-3] = '.';
     s[i-4] = '.';
     while((c=getchar()) != EOF && c != '\n') {
       ++i;
     }
   }
   return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
  int i;
  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}
