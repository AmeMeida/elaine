#include <stdio.h>
#include <stdlib.h>

void printVetor(int *vetor, int size);
void readVetor (int *vetor, int size); 
int countMultiplos (int *vetor, int size, int num);

int main (void) {
    int *vetor, multiplicador, sizeofVetor; 

    printf ("Insira quantos números você deseja informar:  "); 
    scanf ("%d", &sizeofVetor); 
    vetor = (int*) malloc (sizeofVetor * sizeof(int)); 
    if (vetor = NULL) {
        printf ("ERRO."); 
        exit (0);
    }
    readVetor(vetor, sizeofVetor); 

    printf ("Insira o valor para verificar os múltiplos:  "); 
    scanf ("%d", &multiplicador);

    printf ("Vetor inserido:  \n");
    // printVetor(vetor, sizeofVetor); 
    for (int count = 0; count < sizeofVetor; count++) {
        printf("\n%d - %d", count+1, vetor[count]); 
    } 
    printf ("Quantidade de números presentes no vetor múltiplos de %d:  %d", multiplicador, countMultiplos(vetor, sizeofVetor, multiplicador));
    free(vetor); 
}

void printVetor(int *vetor, int size) {
    for (int count = 0; count < size; count++) {
        printf("\n%d - %d", count+1, vetor[count]); 
    }
}

void readVetor (int *vetor, int size) {
    for (int count = 0; count < size; count++) {
        printf ("\nInsira o %dº número:  ", count+1);
        scanf("%d", &vetor[count]);
    }
}

int countMultiplos (int *vetor, int size, int num) {
    int multiplos = 0;
    for (int count = 0; count < size; count++) {
        if (vetor[count] % multiplos == 0) {
            multiplos++; 
        }
    }
    return multiplos;
}