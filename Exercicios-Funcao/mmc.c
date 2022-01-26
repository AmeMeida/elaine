#include <stdio.h>
#include <stdlib.h>

int numero1, numero2; 
int mdc(int numero1, int numero2); 
int mmc(int numero1, int numero2);

int main (void) {
    printf ("Insira o primeiro número:  ");
    scanf ("%d", &numero1); 
    printf ("Insira o segundo número:  ");
    scanf ("%d", &numero2); 
    printf ("O mmc de %d e %d é %d.\n", numero1, numero2, mmc(numero1, numero2));
}

int mdc(int numero1, int numero2) {
    for (int aux = 0; numero1 % numero2 != 0;) {
        aux = numero2; 
        numero2 = numero1 % numero2; 
        numero1 = aux;
    } 
    return numero2; 
}

int mmc(int numero1, int numero2) {
    return (numero1*numero2)/mdc(numero1, numero2);
}

