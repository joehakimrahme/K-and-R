#include <ctype.h>
#include <math.h>
#include <stdio.h>

/* atof: convert string s to double */
double atof(char s[])
{
  double val, power;
  int i, sign;
  int exponent=0, esign=1;

  for (i = 0; isspace(s[i]); i++) /* skip white space */
    ;
  sign = (s[i] == '-') ? -1 : 1;
  if (s[i] == '+' || s[i] == '-')
    i++;
  for (val = 0.0; isdigit(s[i]); i++)
    val = 10.0 * val + (s[i] - '0');
  if (s[i] == '.')
    i++;
  for (power = 1.0; isdigit(s[i]); i++) {
    val = 10.0 * val + (s[i] - '0');
    power *= 10;
  }
  if (s[i] == 'e' || s[i] == 'E')
    i++;
  esign = (s[i] == '-') ? -1 : 1;
  if (s[i] == '+' || s[i] == '-')
    i++;
  for (exponent = 0; isdigit(s[i]); i++)
    exponent = 10.0 * exponent + (s[i] - '0');

  return (sign * val / power) * pow(10, esign * exponent);
}

int main() {
  printf("%f\n", atof("123"));
  printf("%f\n", atof("123.45"));
  printf("%f\n", atof("123.45e5"));
  printf("%f\n", atof("123.45e6"));
  printf("%f\n", atof("123.45e-5"));
  printf("%f\n", atof("123.45e-6"));
}
