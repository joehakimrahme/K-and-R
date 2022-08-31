#include <stdio.h>
#include <stdlib.h>

int main()
{
  int c;
  
  while((c = getchar()) != EOF) {
    switch(c) {
    case '\\':
      putchar('\\');
      putchar('\\');
      break;
    case '\t':
      putchar('\\');
      putchar('t');
      break;
    case '\n':
      putchar('\\');
      putchar('n');
      break;
    default:
      putchar(c);
      break;
    }
  }

  return EXIT_SUCCESS;
}
