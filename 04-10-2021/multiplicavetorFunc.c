#include <stdio.h>
#include <stdlib.h>
#define SIZEI 3
#define SIZEJ 4
#define MULT 2

void readMatrix (int matriz[SIZEI][SIZEJ]) {
    for (int countI=0; countI<SIZEI; countI++) {
        for (int countJ=0; countJ<SIZEJ; countJ++) {
            printf ("Digite o valor %d:  ", countI*SIZEJ+countJ+1);
            scanf("%d", &matriz[countI][countJ]);
        }
    }
}

void printMatrix (int matriz[SIZEI][SIZEJ]) {
    for (int countI=0; countI<SIZEI; countI++) {
        for (int countJ=0; countJ<SIZEJ; countJ++) {
            printf ("%d ", matriz[countI][countJ]); 
        }
        puts("");
    }
}

void multiplyMatrix (int matriz[SIZEI][SIZEJ], int mult) {
    for (int countI=0; countI<SIZEI; countI++) {
        for (int countJ=0; countJ<SIZEJ; countJ++) {
            matriz[countI][countJ]*=mult;
        }
    }
}

int main (void) {
    int matriz[SIZEI][SIZEJ];
    puts("\nLeitura da matriz:  "); 
    readMatrix(matriz);
    puts("\nImpressão da matriz:  ");  
    printMatrix(matriz); 
    multiplyMatrix(matriz, MULT); 
    printf("\nImpressão da matriz multiplicada por %d:  \n", MULT);
    printMatrix(matriz); 
    return 0;
}