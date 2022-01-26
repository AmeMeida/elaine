#include <stdio.h>

int main(void) {
  const int MAX = 3, MULTIPLICADOR = 5;
  int countI, countJ, soma=0;
  int matriz[MAX][MAX];

  for (countI=0; countI<MAX; countI++) {
    for (countJ=0; countJ<MAX; countJ++)  {
      printf ("Digite o número da linha %d e da coluna %d:  ", countI+1, countJ+1);
      scanf ("%d", &matriz[countI][countJ]);
      matriz[countI][countJ]*=MULTIPLICADOR;
    }
  }

  printf ("\nMatriz com elementos multiplicados por %d:\n", MULTIPLICADOR);

  for (countI=0; countI<MAX; countI++) {
    for (countJ=0; countJ<MAX; countJ++)  {
      printf ("%d ", matriz[countI][countJ]);
    }
    puts("");
  }
  return 0;
}
