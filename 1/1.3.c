#include <stdio.h>
#include <stdlib.h>
/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300; floating-point version */
int main()
{
  float fahr, celsius;
  float lower, upper, step;
  lower = 0; /* lower limit of temperatuire scale */
  upper = 300; /* upper limit */
  step = 20; /* step size */
  fahr = lower;
  printf("%3s %6s\n--- ------\n", "F", "C");
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
  return EXIT_SUCCESS;
}
