#include <stdio.h>

int main(void) {
  const int MAX = 3;
  int countI, countJ, soma=0, somaDiagonal=0;
  int matriz[MAX][MAX];

  for (countI=0; countI<MAX; countI++) {
    for (countJ=0; countJ<MAX; countJ++)  {
      printf ("Digite o número da linha %d e da coluna %d:  ", countI+1, countJ+1);
      scanf ("%d", &matriz[countI][countJ]);
      soma+=matriz[countI][countJ];
      if (countI == countJ) {
        somaDiagonal+=matriz[countI][countJ];
      }
    }
  }

  puts("\nMatriz inserida:  \n");

  for (countI=0; countI<MAX; countI++) {
    for (countJ=0; countJ<MAX; countJ++)  {
      printf ("%d ", matriz[countI][countJ]);
    }
    puts("");
  }

  printf ("\nSoma dos elementos:  %d", soma);
  printf ("\nSoma dos elementos da diagonal principal:  %d", somaDiagonal);

  return 0;
}
