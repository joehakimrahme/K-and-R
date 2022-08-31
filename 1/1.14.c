#include <stdio.h>
#include <stdlib.h>

/* Draw a vertical histogram of the frequency of chars
 */

#define MAX_LENGTH 256

void count_characters(int *counter);
void render_grid(int *counter);

void main()
{
  int counter[MAX_LENGTH]={0};
  count_characters(counter);
  render_grid(counter);
}

void count_characters(int *counter) {
  /* Parse stdin until EOF, incrementing entries in the
     argument array.
  */
  int c;

  while ((c = getchar()) != EOF) {
    counter[c]++;
  }
}

void render_grid(int* counter) {
  int i,j;
  int grid_size=0;
  int start, finish;

  for (i=0; i<MAX_LENGTH; i++) {
    if (counter[i]) {
      break;
    }
  }
  start = i;

  for (i=MAX_LENGTH-1; i>=0; i--) {
    if (counter[i]) {
      break;
    }
  }
  finish=i+1;

  /* Loop over the counter first to identify the largest value. It
     will define the height of our histogram, or in other words, how
     many lines will our histogram print.
   */
  for (i=start; i<finish; i++) {
    if (counter[i] > grid_size) {
      grid_size = counter[i];
    }
  }



  /* For each cell, compare the coordinates with what's present in
     counter.
   */
  for (i=grid_size; i>0; i--) {
    for (j=start; j<finish; j++) {
      printf("%s", i > counter[j] ? "   " : " * ");
    }
    printf("\n");
  }
  for (j=start; j<finish; j++) {
    printf("%3d", j);
  }
  printf("\n");
}
