#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
float a, b, c, delta, X1, X2;

  printf ("Digite seu A:  ");
    scanf ("%f", &a);
    setbuf (stdin, NULL);

  printf ("Digite seu B:  ");
    scanf ("%f", &b);
    setbuf (stdin,NULL);

  printf ("Digite seu C:  ");
    scanf ("%f", &c);
    setbuf (stdin, NULL);

  delta = b*b-4*a*c;

  X1 = (-b+(sqrt(delta)))/(2*a);
  X2 = (-b-(sqrt(delta)))/(2*a);

  printf ("\nX1=%f\n", X1);
  printf ("X2=%f\n", X2);
  printf ("Delta=%f", delta);

  return 0;
}
