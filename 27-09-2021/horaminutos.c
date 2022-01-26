#include <stdio.h>
#include <stdlib.h>

void conversor (int *phoras, int *pminutos) {
    for (*phoras=0; *pminutos>=60; (*phoras)++) {
        (*pminutos)-=60;
    }
}

int main (void) {
    int horas, minutos;
    printf ("Insira o valor em minutos:  "); 
    scanf ("%d", &minutos); 

    conversor(&horas, &minutos); 
    printf ("\nHorário:  %dh%d\n", horas, minutos); 
}