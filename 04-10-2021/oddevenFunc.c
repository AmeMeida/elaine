#include <stdio.h>
#include <stdlib.h>
#define SIZEI 3
#define SIZEJ 4

void readMatrix (int matriz[SIZEI][SIZEJ]) {
    for (int countI=0; countI<SIZEI; countI++) {
        for (int countJ=0; countJ<SIZEJ; countJ++) {
            printf ("Digite o valor %d:  ", countI*SIZEJ+countJ+1);
            scanf("%d", &matriz[countI][countJ]);
        }
    }
}

void oddevenMatrix (int matriz[SIZEI][SIZEJ], int *peven, int *podd) {
    for (int countI=0; countI<SIZEI; countI++) {
        for (int countJ=0; countJ<SIZEJ; countJ++) {
            if (matriz[countI][countJ] % 2 == 0) {
                *peven+=1; 
            } else if (matriz[countI][countJ] % 2 == 1) {
                *podd+=1;
            }
        }
    }
}


int main (void) {
    int matriz[SIZEI][SIZEJ], even=0, odd=0; 
    readMatrix(matriz); 
    oddevenMatrix(matriz, &even, &odd);  
    printf ("\nNúmeros ímpares:  %d\nNúmeros pares:  %d\n", odd, even); 
    return 0;
}