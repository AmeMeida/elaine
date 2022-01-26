#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

void readMatrix (int matriz[SIZE][SIZE]) {
    for (int countI=0; countI<SIZE; countI++) {
        for (int countJ=0; countJ<SIZE; countJ++) {
            printf ("Digite o número da linha %d e coluna %d:  ", countI+1, countJ+1);
            scanf("%d", &matriz[countI][countJ]);
        } 
    }
}

int evenCounter (int matriz[SIZE][SIZE]) {
    int even=0; 
    for (int countI=0; countI<SIZE; countI++) {
        for (int countJ=0; countJ<SIZE; countJ++) {
            if (matriz[countI][countJ] % 2 == 0) {
            even++;
            } 
        } 
    }
    return even; 
}


int main (void) {
    int matriz[SIZE][SIZE];
    readMatrix(matriz); 
    printf ("\nEven numbers:  %d\n", evenCounter(matriz));
}

