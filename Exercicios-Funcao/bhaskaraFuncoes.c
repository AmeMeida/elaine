#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float a, b, c;
float delta (float a, float b, float c); 
float xi (float a, float b, float c);
float xii (float a, float b, float c);

int main (void) {
    printf ("Insira o valor de A:  ");
    scanf ("%f", &a);
    printf ("Insira o valor de B:  ");
    scanf ("%f", &b);
    printf ("Insira o valor de C:  ");
    scanf ("%f", &c);

    if (delta(a,b,c) < 0) {
        return 1; 
    }

    printf ("\nO valor de delta é:  %f\nO valor de X1 é:  %f\nO valor de X2 é:  %f", delta(a,b,c), xi(a,b,c), xii(a,b,c));
    return 0;
}

float delta (float a, float b, float c) {
    return b*2 + (-4*a*c);
}

float xi (float a, float b, float c) {
    return (-b - sqrt(delta(a,b,c))) / 2 * a;
}

float xii (float a, float b, float c) {
    return (-b + sqrt(delta(a,b,c))) / 2 * a;
}