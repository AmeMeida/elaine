#include <stdio.h>
#include <locale.h>

int main(void) {

  setlocale(LC_ALL,"");

  int si,sf,deltas;

  printf ("Digite a quilometragem inicial:  ");
    scanf ("%d", &si);

  printf ("Digite a quilometragem final:  ");
    scanf ("%d", &sf);

  deltas = sf-si;

  printf ("Você percorreu %d quilômetros.", deltas);
  
  return 0;
}