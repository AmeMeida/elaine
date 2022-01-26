#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
  const int LEN = 30; 
  int count, vogais=0;
  char nome[LEN]; 

  printf ("Digite seu nome:  ");
  fgets (nome, 30, stdin); 

  for (count = 0; count < strlen(nome); count++) {
    nome[count] = tolower(nome[count]);
  }

  for (count = 0; count < strlen(nome); count++) {
    if (nome[count] == 'a' || nome[count] == 'e' || nome[count] == 'i' || nome[count] == 'o' || nome[count] == 'u') {
      vogais++;
    }
  }

  printf ("O número de vogais da palavra é %d.", vogais);

  return 0;
}
