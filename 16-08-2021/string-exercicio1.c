#include <stdio.h>

int main(void) {
  const int LEN = 30;
  char nome[LEN];
  int count;

  printf ("Digite seu nome:  ");
  fgets(nome, LEN, stdin);
  printf ("As quatro primeiras letras de seu nome são:  ");

  for (count=0; count < 4; count++) {
    printf ("%c", nome[count]);
  }
  
  return 0;
}
