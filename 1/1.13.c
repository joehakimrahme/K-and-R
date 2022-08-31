#include <stdio.h>

/* Draw a vertical histogram of the length of words in a text 

   Warning that the counter structure used to hold the count of each
   word size is an array of static size. Building a dynamic
   vector-like array would, in my opinion, obfuscate the code,
   distracting from the drawing part.

   The simplest way to write a dynamic array is to define a struct
   that holds a single array. Before insertion of any value, check for
   remaining size. If the array is full, allocate a new array double
   the size and copy all values in it.

   Maybe I should do this next?
 */
#define MAX_LENGTH 10

#define IN 1 
#define OUT 0



void count_world_length(int *counter);
void render_grid(int *counter);

void main()
{
  int counter[MAX_LENGTH]={0};
  count_world_length(counter);
  render_grid(counter);
}

void count_world_length(int *counter) {
  /* Parse stdin until EOF, counting the length of each word. Every
     time the function exits a word, it increments the corresponding
     entry in the counter array */
  int c; 
  int length = 0;
  int state = OUT;
  
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if (state == IN) {
	counter[length]++;
      }
      state = OUT;
    } else {
      if (state == OUT) {
	length = 0;
	state = IN;
      }
      length++;
    }
  }
}

void render_grid(int* counter) {
  int i,j;
  int grid_size=0;

  /* Loop over the counter first to identify the largest value. It
     will define the height of our histogram, or in other words, how
     many lines will our histogram print.
   */
  for (i=0; i<MAX_LENGTH; i++) {
    if (counter[i] > grid_size) {
      grid_size = counter[i];
    }
  }

  /* For each cell, compare the coordinates with what's present in
     counter.
   */
  for (i=grid_size; i>0; i--) {
    for (j=1; j<MAX_LENGTH; j++) {
      printf("%s", i > counter[j] ? " " : "*");
    }
    printf("\n");
  }
}
