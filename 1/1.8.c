#include <stdio.h>
#include <stdlib.h>

int main()
{
  int nl=0, ns=0, nt=0;
  
  int c;
  
  while((c = getchar()) != EOF) {
    switch(c) {
    case ' ':
      ns++;
      break;
    case '\t':
      nt++;
      break;
    case '\n':
      nl++;
      break;
    default:
      break;
    }
  }

  printf("Number of spaces: %d\n", ns);
  printf("Number of tabs: %d\n", nt);
  printf("Number of newlines: %d\n", nl);
  return EXIT_SUCCESS;
}
