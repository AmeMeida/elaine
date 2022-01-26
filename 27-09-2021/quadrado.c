#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define RAIZ2 sqrt(2); 

void quadrado (int *plado, int *pperimetro, int *parea, int *pdiagonal) {
    (*pperimetro)=(*plado)*4; 
    (*parea)=(*plado)*(*plado); 
    (*pdiagonal)=(*plado)*RAIZ2;
}

int main (void) {
    int lado, perimetro, area, diagonal; 
    printf ("Insira o valor da lateral do quadrado:  "); 
    scanf ("%d", &lado); 

    quadrado (&lado, &perimetro, &area, &diagonal); 
    printf ("\nTamanho do lado:  %d\nPerímetro:  %d\nÁrea:  %d\nDiagonal:  %d\n", lado, perimetro, area, diagonal);
    return 0;    
}