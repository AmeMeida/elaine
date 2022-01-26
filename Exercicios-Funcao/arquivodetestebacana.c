#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int valor1, valor2;

int soma (int valor1, int valor2) {
    return valor1 + valor2;
}

int subtracao (int valor1, int valor2) {
    return valor1 - valor2; 
}

int multiplicacao (int valor1, int valor2) {
    return valor1 * valor2; 
}
 
int main(void) {
    printf ("Digite o primeiro valor:  ");
    scanf ("%d", &valor1); 
    printf ("Digite o segundo valor:  ");
    scanf ("%d", &valor2);
    setbuf(stdin, NULL);

    printf ("\nSelecione a sua opção:  ");
    char opcao = getchar();

    switch (opcao) {
        case '+': 
            printf("\n%d\n", soma(valor1, valor2));
            break;

        case '-':
            printf("\n%d\n", subtracao(valor1, valor2));
            break;

        case '*':
            printf("\n%d\n", multiplicacao(valor1, valor2));
            break;

        default: 
            printf ("gasaelnomine01 bobao\n");
    }
    return 0;
}