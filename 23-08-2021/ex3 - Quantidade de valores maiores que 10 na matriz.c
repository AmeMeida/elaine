#include <stdio.h>

int main(void) {
  const int MAX = 6;
  int countI, countJ, maioresQue10=0;
  int matriz[MAX][MAX];

  for (countI=0; countI<MAX; countI++) {
    for (countJ=0; countJ<MAX; countJ++)  {
      printf ("Digite o número da linha %d e da coluna %d:  ", countI+1, countJ+1);
      scanf ("%d", &matriz[countI][countJ]);
      if (matriz[countI][countJ]>10) {
        maioresQue10++;
      }
    }
  }

  printf ("\nQuantidade de números maiores que 10 inseridos:  %d", maioresQue10);
  return 0;
}
