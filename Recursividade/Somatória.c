#include <stdio.h>
#include <stdlib.h>

int somatoria(int number) {
    if (number >= 1) {
        return(number+somatoria(number-1));        
    }
}

int main (void) {
    int n;
    printf ("Insira o valor para realizar a somatória:  "); 
    scanf ("%d", &n); 
    if (n<0) {
        printf ("ERRO: O número deve ser nulo ou positivo.\n\n");
        return 1;
    }
    printf ("A somatória de %d é %d\n\n", n, somatoria(n));
    return 0;
}   