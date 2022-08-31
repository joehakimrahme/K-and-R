#include <stdio.h>
/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300; floating-point version */

float convert_to_Celsius(float fahr);

int main()
{
  float fahr, celsius;
  float lower, upper, step;
  lower = 0;
  upper = 300;
  step = 20;
  /* lower limit of temperatuire scale */
  /* upper limit */
  /* step size */
  fahr = lower;
  while (fahr <= upper) {
    celsius = convert_to_Celsius(fahr);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }

  return 0;
}

float convert_to_Celsius(float fahr) {
  return (5.0/9.0) * (fahr-32.0);
}
