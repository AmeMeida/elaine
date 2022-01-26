#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
double a, b, c, delta, X1, X2;

  printf ("Digite seu A:  ");
    scanf ("%lf", &a);

  printf ("Digite seu B:  ");
    scanf ("%lf", &b);

  printf ("Digite seu C:  ");
    scanf ("%lf", &c);

  delta = b*b-4*a*c;

  X1 = (-b+(sqrt(delta)))/(2*a);
  X2 = (-b-(sqrt(delta)))/(2*a);

  printf ("\nX1=%lf\n", X1);
  printf ("X2=%lf\n", X2);
  printf ("Delta=%lf\n", delta);

  return 0;
}
