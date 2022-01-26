#include <stdio.h>
#include <string.h>

int main(void) {
  const int LEN = 30; 
  int count;
  char nome[LEN];

  printf ("Digite seu nome:  ");
  fgets (nome, LEN, stdin);

  printf ("As letras ímpares do seu nome são:  ");

  for (count = 0; count < strlen(nome); count+=2) {
    printf ("%c", nome[count]);
  }

  return 0;
}
