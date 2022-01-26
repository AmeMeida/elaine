#include <stdio.h>

int main(void) {
  const int MAX = 5;
  int countI, countJ;
  int matriz[MAX][MAX];

  for (countI=0; countI<MAX; countI++) {
    for (countJ=0; countJ<MAX; countJ++)  {
      printf ("Digite o número da linha %d e da coluna %d:  ", countI+1, countJ+1);
      scanf ("%d", &matriz[countI][countJ]);

      if (matriz[countI][countJ]%2==0) {
        matriz[countI][countJ]=1;
      } else {
          matriz[countI][countJ]=-1;
        }
    }
  }

  puts("\nRelação de pares e ímpares da tabela inserida:  ");

  for (countI=0; countI<MAX; countI++) {
    for (countJ=0; countJ<MAX; countJ++)  {
      printf ("%d ", matriz[countI][countJ]);
    }
    puts("");
  }
  return 0;
}
