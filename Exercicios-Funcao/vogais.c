#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char caractere;
const char vogais[]="aeiou";
char* funcaoVogais (char caractere); 

int main (void) {
    printf ("Por favor, digite um caractere:  ");
    caractere = tolower(getchar());
    printf ("\nA letra %c é %s\n", caractere, funcaoVogais(caractere));
}

char* funcaoVogais(char caractere) {
    for (int count=0; count < 5; count++) {
        if (caractere == vogais[count]) {
            return "vogal";
        }
    }
        return "consoante";
}
