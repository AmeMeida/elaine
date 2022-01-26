#include <stdio.h>
#include <string.h>

int main(void) {
  const int LEN = 30;
  int count; 
  char nome[LEN];

  printf ("Digite seu nome:  ");
  fgets (nome, LEN, stdin);

  int length = strlen(nome)-1;
  printf ("Seu nome tem %d letras.", length);

  return 0;
}