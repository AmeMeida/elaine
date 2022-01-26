#include <stdio.h>
#include <stdlib.h>

int num;
char* parimparFuncao(int num);

int main (void) {
    printf ("Digite um valor:  ");
    scanf ("%d", &num);
    printf ("O número inserido é %s\n", parimparFuncao(num));
}

char* parimparFuncao(int num) {
    if (num % 2 == 0) {
        return "par";
    } else if (num % 2 == 1) {
            return "impar";
        }
}