#include <stdio.h>
#include <stdlib.h>

void main()
{
  short mute = 0;
  int c;

  while ((c=getchar()) != EOF) {
    if (c == ' ') {
      if (mute == 0) {
	mute = 1;
	putchar(c);
      }
    } else {
	if (mute == 1) {
	  mute = 0;
	}
	putchar(c);
    }
  }
}

